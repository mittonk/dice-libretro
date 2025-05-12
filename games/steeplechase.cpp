#include "../circuit_desc.h"
#include "../circuit.h"

#define DEBUG
//#undef DEBUG

#ifdef DEBUG
static VcdLogDesc vcd_log_desc
(
    "output_steeple.vcd",
    1, "A",
    2, "B",
    3, "C",
    4, "D",
    5, "E_RESET",
    6, "F",
    7, "G",
    8, "H",
    9, "I",
    10, "J_CLK",
    11, "K",
    12, "L",
    13, "M_BUTTON1",
    14, "N_COUNT0",
    15, "N_COUNT1",
    16, "N_COUNT2",
    17, "N_COUNT3",
    18, "R_BUG1",
    19, "R_BUG2",
    20, "R_BUG3",
    21, "R_BUG4",
    22, "R_BUG5",  // Not used?
    23, "R_BUG6",
    24, "R_BUG7",
    25, "R_BUG8"
);
#endif

// "Random" clock created from 60 Hz AC source
// ~16 ms period with 75% duty cycle, +/- 0.2 ms
static CUSTOM_LOGIC( RANDOM_CLOCK_GEN )
{
    Chip* output_chip = chip->output_links.front().chip;
    
    double r = 2.0E-4 * (double(rand()) / RAND_MAX - 0.5);
    double hi_time = (1.0 / 60.0) * 0.75 + r;
    double lo_time = (1.0 / 60.0) * 0.25 - r;
    
    output_chip->delay[0] = uint64_t(lo_time / Circuit::timescale);
    output_chip->delay[1] = uint64_t(hi_time / Circuit::timescale);
    chip->pending_event = chip->circuit->queue_push(chip, 0);
}

extern CUSTOM_LOGIC( clock );

static CHIP_DESC( RANDOM_CLOCK_GEN ) = 
{
	CUSTOM_CHIP_START( &RANDOM_CLOCK_GEN )
        OUTPUT_PIN( i1 ),

    CUSTOM_CHIP_START(&clock)
        INPUT_PINS( i1 )
        OUTPUT_PIN( 1 ),

    CHIP_DESC_END
};


static RomDesc c8_desc("steeplechase", "003774.C8", 0xf3785f4a); // Bugle ROM
static RomDesc c4_desc("steeplechase", "003773-A.C4", 0x5DDC49B6); // Horse Video A
static RomDesc d4_desc("steeplechase", "003773-B.D4", 0xE6994CDE); // Horse Video B

//static RomDesc c8_desc("steeplechase", "003774.C8", 0xf3785f4a); // Bugle ROM
//static RomDesc c4_desc("steeplechase", "003773-a.4c", 0x5DDC49B6); // Horse Video A
//static RomDesc d4_desc("steeplechase", "003773-b.4d", 0xE6994CDE); // Horse Video B

static CapacitorDesc c3_desc(P_FARAD(100.0));
static CapacitorDesc c20_desc(U_FARAD(0.01));
static CapacitorDesc c68_desc(P_FARAD(100.0));

static BufferDesc buf1_desc(DELAY_NS(20.0), DELAY_NS(5.0)); // Prevent glitch on VRESET
static BufferDesc buf2_desc(DELAY_NS(5.0), DELAY_NS(25.0)); // Prevent glitch on picket clock

static DipswitchDesc dsw1_desc("game_time", "dice_dipswitch_1", "Game Time", 0, "90 Seconds", "2 Minutes");
static DipswitchDesc dsw2_desc("coinage", "dice_dipswitch_2", "Coinage", 0, "1 Coin / 2 Credit", "1 Coin / 6 Credits");

static VIDEO_DESC( steeplechase )
    // Values guessed based on screenshots. TODO: Make more accurate
    //             X,    Y,     W,    H,   R,    G,    B
    VIDEO_OVERLAY( 0.0,  34.0, -1.0, 32.0, 0.75, 0.80, 0.25 ) // Yellow Horse (Bobin Robin)
    VIDEO_OVERLAY( 0.0,  66.0, -1.0, 32.0, 0.70, 0.15, 0.05 ) // Red Horse (Beetle Bomb)
    VIDEO_OVERLAY( 0.0,  98.0, -1.0, 32.0, 0.20, 0.50, 0.80 ) // Blue Horse (Ash Can)
    VIDEO_OVERLAY( 0.0, 130.0, -1.0, 32.0, 0.60, 0.25, 0.60 ) // Purple Horse (Mac's Nag)
    VIDEO_OVERLAY( 0.0, 162.0, -1.0, 32.0, 0.90, 0.75, 0.25 ) // Amber Horse (Golden Boys)
    VIDEO_OVERLAY( 0.0, 194.0, -1.0, 32.0, 0.35, 0.60, 0.25 ) // Green Horse (Crazy Arnold)
    VIDEO_RETRO_V_SIZE(268)  // Also 256
VIDEO_DESC_END


static INPUT_DESC( steeplechase )
    INPUT_INFO(BUTTONS1_INPUT, {{ 1 }}, "Jump (Bobin Robin)")
    INPUT_INFO(BUTTONS2_INPUT, {{ 1 }}, "Jump (Beetle Bomb)")
    INPUT_INFO(BUTTONS3_INPUT, {{ 1 }}, "Jump (Ash Can)")
    INPUT_INFO(BUTTONS4_INPUT, {{ 1 }}, "Jump (Mac's Nag)")
    INPUT_INFO(BUTTONS5_INPUT, {{ 1 }}, "Jump (Golden Boys)")
    INPUT_INFO(BUTTONS6_INPUT, {{ 1 }}, "Jump (Crazy Arnold)")
    INPUT_INFO(COIN_INPUT, {{ 1 }}, "Insert Coin")
    INPUT_INFO(COIN_INPUT, {{ 2 }}, "Insert Coin")
    INPUT_INFO(START_INPUT, {{ 1 }}, "Start Game")
INPUT_DESC_END

CIRCUIT_LAYOUT( steeplechase )
	/**************************************************************************
	* Chips                                                                   *
	**************************************************************************/
    CHIP("XTAL", CLOCK_12_096_MHZ)
    CHIP("RANDOM_CLOCK", RANDOM_CLOCK_GEN)
    
    CHIP("A1", 74164)
    CHIP("A2", 9316)
    CHIP("A3", 7400)
    CHIP("A4", 7474)

    CHIP("B1", 9316)
    CHIP("B2", 9316)
    CHIP("B3", 7420)
    CHIP("B4", 7408)
    CHIP("B7", 74107)
    CHIP("B8", 9316)
    // CHIP("B9", LM380)

    CHIP("C1", 74164)
    CHIP("C2", 7474)
    CHIP("C3", 9316)
    CHIP("C4", 74S287, &c4_desc)
    CHIP("C5", 74165)
    CHIP("C6", 7420)
    CHIP("C7", 7493)
    CHIP("C8", 82S123, &c8_desc)  // Unsure on ROM type
    // C9
    // CHIP("C10", LM32A)

    CHIP("D1", 7400)
    CHIP("D2", 7404)
    CHIP("D3", 9316)
    CHIP("D4", 74S287, &d4_desc)
    CHIP("D5", 74165)
    CHIP("D6", 7404)
    CHIP("D7", 7400)
    CHIP("D8", 9316)

    CHIP("E1", 7474)
    CHIP("E2", 7474)
    CHIP("E3", 7474)
    CHIP("E4", 7402)
    CHIP("E5", 7474)
    CHIP("E6", 7402)
    // E7
    CHIP("E8", 7404)

    CHIP("F1", 9316)
    CHIP("F2", 7427)
    CHIP("F3", 7410)
    CHIP("F4", 7486)
    CHIP("F5", 9312)
    CHIP("F6", 7474)
    CHIP("F7", 7493)
    CHIP("F8", 7474)

    CHIP("H1", 9316)
    CHIP("H2", 7474)
    CHIP("H3", 9316)
    CHIP("H4", 7400)
    CHIP("H5", 9312)
    CHIP("H6", 7402)
    CHIP("H7", 7402)
    CHIP("H8", 7404)

    CHIP("J1", 7432)
    CHIP("J2", 7402)
    CHIP("J3", 9301)
    CHIP("J4", 7474)
    CHIP("J5", 9312)
    CHIP("J6", 7411)
    CHIP("J7", 7411)
    CHIP("J8", 7486)

    CHIP("K1", 7474)
    CHIP("K2", 7402)
    CHIP("K3", 7404)
    CHIP("K4", 7402)
    CHIP("K5", 7474)
    CHIP("K6", 9316)
    CHIP("K7", 9316)
    CHIP("K8", 7474)

    CHIP("L1", 7404)
    CHIP("L2", 9316)
    CHIP("L3", 9316)
    CHIP("L4", 9316)
    CHIP("L5", 7474)
    CHIP("L6", 9316)
    CHIP("L7", 9316)
    CHIP("L8", 7474)
    CHIP("L9", 7414)

    CHIP("M1", 7404)
    CHIP("M2", 9316)
    CHIP("M3", 9316)
    CHIP("M4", 9316)
    CHIP("M5", 7474)
    CHIP("M6", 9316)
    CHIP("M7", 9316)
    CHIP("M8", 7474)
    CHIP("M9", 7404)

    CHIP("N1", 9316)
    CHIP("N2", 9316)
    CHIP("N3", 9316)
    CHIP("N4", 9316)
    CHIP("N5", 9301)
    CHIP("N6", 74175)
    CHIP("N7", 74175)
    CHIP("N8", 9312)

    CHIP("P1", 9316)
    CHIP("P2", 9316)
    CHIP("P3", 9316)
    CHIP("P4", 9316)
    CHIP("P5", 9316)
    CHIP("P6", 7430)
    CHIP("P7", 7404)
    CHIP("P8", 9312)

    CHIP("CAP3", CAPACITOR, &c3_desc)
    CHIP("CAP20", CAPACITOR, &c20_desc)
    CHIP("CAP68", CAPACITOR, &c68_desc)

    CHIP("DSW1", DIPSWITCH, &dsw1_desc)
    CHIP("DSW2", DIPSWITCH, &dsw2_desc)

    CHIP("JUMPSW1", BUTTONS1_INPUT) 
    CHIP("JUMPSW2", BUTTONS2_INPUT) 
    CHIP("JUMPSW3", BUTTONS3_INPUT) 
    CHIP("JUMPSW4", BUTTONS4_INPUT)
    CHIP("JUMPSW5", BUTTONS5_INPUT)
    CHIP("JUMPSW6", BUTTONS6_INPUT)

    CHIP("COIN",  COIN_INPUT)
    CHIP("START", START_INPUT)
    CHIP("LATCH", LATCH)

    VIDEO(steeplechase)
    INPUT(steeplechase)

    CHIP("BUF1", BUFFER, &buf1_desc) // Prevent glitch on VRESET. TODO: Why is this needed?
    CHIP("BUF2", BUFFER, &buf2_desc) // Prevent glitch on picket clock. TODO: Why is this needed?

    OPTIMIZATION_HINT("B1", 256, 64)

    OPTIMIZATION_HINT("C5", 16, 64)
    OPTIMIZATION_HINT("D5", 8, 64)

    OPTIMIZATION_HINT("B3", 32, 64)
    OPTIMIZATION_HINT("B4", 32, 64)

#ifdef DEBUG
	CHIP("LOG1", VCD_LOG, &vcd_log_desc)
#endif
	
    /**************************************************************************
    * Signals                                                                 *
	**************************************************************************/
    #define CLOCK           "K1", 5
    #define CLOCK_n         "K1", 5
    #define BUFFERED_CLOCK  "L1", 12
    
    #define HCLOCK1 "M1", 10
    #define HCLOCK2 "M1", 2
    #define HCLOCK3 "M1", 4
    #define HCLOCK4 "M1", 12

    #define H1      "H2", 5
    #define H2      "H1", 14
    #define H4      "H1", 13
    #define H8      "H1", 12
    #define H16     "H1", 11
    #define H32     "F1", 14
    #define H64     "F1", 13
    #define H128    "F1", 12
    #define H256    "F1", 11
    #define H256_n  "L1", 8

    #define HRESET_n "D1", 6
    #define HBLANK_n "H2", 9
    #define HSYNC    "J2", 10

    #define V1      "C2", 5
    #define V1_n    "C2", 6
    #define V2      "C3", 14
    #define V4      "C3", 13
    #define V8      "C3", 12
    #define V16     "C3", 11
    #define V32     "D3", 14
    #define V64     "D3", 13
    #define V128    "D3", 12
    #define V256    "D3", 11
    #define V256_n  "D2", 10

    //#define VRESET   "D3", 15
    #define VRESET   "BUF1", 2
    #define VRESET_n "D2", 12
    #define VBLANK_n "E3", 5
    #define VSYNC    "J2", 13
    #define VF1      "E3", 9

    #define TRACK            "C3", 15
    #define TRACK_CLOCK      "D2", 6
    #define TRACK_CLOCK_n    "D1", 3
    #define HALF_TRACK_CLOCK "D2", 4

    #define F1   "H3", 14
    #define F2   "H3", 13
    #define F4   "H3", 12
    #define F8   "H3", 11
    #define F16  "B7", 5

    #define FWD1 "K3", 12
    #define FWD2 "K3", 4
    #define FWD3 "K3", 10
    #define FWD4 "K3", 6
    #define FWD5 "K3", 8
    #define FWD6 "K3", 2
    #define FWD7_n "J1", 3

    #define REV1 "J6", 6
    #define REV2 "J7", 6
    #define REV3 "J6", 12
    #define REV4 "J7", 12
    #define REV5 "J7", 8
    #define REV6 "J6", 8

    #define JUMP1 "H6", 10
    #define JUMP2 "H7", 10
    #define JUMP3 "H6", 1
    #define JUMP4 "H7", 1
    #define JUMP5 "H7", 4
    #define JUMP6 "H6", 4
    #define JUMP7 "J4", 5

    #define FALL1 "L5", 5
    #define FALL2 "L5", 9
    #define FALL3 "K5", 5
    #define FALL4 "K5", 9
    #define FALL5 "M5", 9
    #define FALL6 "M5", 5

    #define TC1   "P2", 15
    #define TC1_n "P7", 2
    #define TC2   "P3", 15
    #define TC2_n "P7", 4
    #define TC3   "P4", 15
    #define TC3_n "P7", 6
    #define TC4   "M2", 15
    #define TC4_n "P7", 8
    #define TC5   "M3", 15
    #define TC5_n "P7", 10
    #define TC6   "M4", 15
    #define TC6_n "P7", 12
    #define TC7   "P1", 15

    #define LEAD1   "N7", 2
    #define LEAD1_n "N7", 3
    #define LEAD2   "N7", 7
    #define LEAD2_n "N7", 6
    #define LEAD3   "N7", 10
    #define LEAD3_n "N7", 11
    #define LEAD4   "N7", 15
    #define LEAD4_n "N7", 14
    #define LEAD5   "N6", 2
    #define LEAD5_n "N6", 3
    #define LEAD6   "N6", 7
    #define LEAD6_n "N6", 6
    #define LEAD7   "E1", 5
    #define LEAD7_n "E1", 6

    #define X1   "F7", 12
    #define X2   "F7", 9
    #define X3   "F7", 8
    #define X4   "F7", 11
    #define X4_n "J8", 8

    #define GALLOP_A "F4", 11
    #define GALLOP_B "F4", 6

    #define HIT_TRIGGER_n "A4", 5

    #define HIT1_n "N5", 12
    #define HIT2_n "N5", 11
    #define HIT3_n "N5", 10
    #define HIT4_n "N5", 9
    #define HIT5_n "N5", 3
    #define HIT6_n "N5", 4
    
    #define GAME_RESET1_n "E5", 5
    #define GAME_RESET2_n "E6", 1
    #define GAME_RESET3_n "E6", 4
    #define BUG_TRIG_n    "D6", 6

    #define A   "N6", 10
    #define A_n "N6", 11
    #define B   "N6", 15
    #define C   "A4", 9

    #define T1  "A2", 14
    #define T2  "A2", 13

    #define ATTRACT   "F8", 6
    #define ATTRACT_n "D6", 4

    #define COIN  "CAP20", 2
    #define PLAY4 "F6", 6
    #define PLAY6 "F6", 8
    #define Q     "H8", 2
    #define Q_n   "H8", 4

    #define RAND     "H8", 10
        
    #define FINISH_LINE "B4", 6
    #define PICKET_LINE "B1", 15
    #define PICKET_n    "B3", 6

    #define HORSES      "J2", 4
    #define HORSES_n    "F3", 12
    
    /**************************************************************************
    * Layout - Page 1                                                         *
	**************************************************************************/
    // Jump 1
    CONNECTION("JUMPSW1", 1_NO, "L9", 5)

    CONNECTION(VCC, "L8", 4)
    CONNECTION(ATTRACT_n, "L8", 2)
    CONNECTION("L9", 6, "L8", 3)
    CONNECTION("L6", 15, "L8", 1)

    CONNECTION("M9", 10, "L6", 7)
    CONNECTION(VCC, "L6", 10)
    CONNECTION(HALF_TRACK_CLOCK, "L6", 2)
    CONNECTION(LEAD7_n, "L6", 3)
    CONNECTION(LEAD1_n, "L6", 4)
    CONNECTION(LEAD1, "L6", 5)
    CONNECTION(GND, "L6", 6)
    CONNECTION("L8", 6, "L6", 9)
    CONNECTION(HIT1_n, "L6", 1)

    CONNECTION(HIT1_n, "L5", 4)
    CONNECTION(GND, "L5", 2)
    CONNECTION(GAME_RESET1_n, "L5", 3)
    CONNECTION("M9", 10, "L5", 1)

    CONNECTION("L6", 15, "H6", 9)
    CONNECTION("L5", 5, "H6", 8)

    CONNECTION("L6", 15, "M9", 11)

    CONNECTION("L5", 5, "J6", 5)
    CONNECTION("L6", 14, "J6", 4)
    CONNECTION(TRACK_CLOCK, "J6", 3)



    // Jump 2
    CONNECTION("JUMPSW2", 1_NO, "L9", 9)

    CONNECTION(VCC, "L8", 10)
    CONNECTION(ATTRACT_n, "L8", 12)
    CONNECTION("L9", 8, "L8", 11)
    CONNECTION("L7", 15, "L8", 13)

    CONNECTION("M9", 8, "L7", 7)
    CONNECTION(VCC, "L7", 10)
    CONNECTION(HALF_TRACK_CLOCK, "L7", 2)
    CONNECTION(LEAD7_n, "L7", 3)
    CONNECTION(LEAD2_n, "L7", 4)
    CONNECTION(LEAD2, "L7", 5)
    CONNECTION(GND, "L7", 6)
    CONNECTION("L8", 8, "L7", 9)
    CONNECTION(HIT2_n, "L7", 1)

    CONNECTION(HIT2_n, "L5", 10)
    CONNECTION(GND, "L5", 12)
    CONNECTION(GAME_RESET2_n, "L5", 11)
    CONNECTION("M9", 8, "L5", 13)

    CONNECTION("L7", 15, "H7", 9)
    CONNECTION("L5", 9, "H7", 8)

    CONNECTION("L7", 15, "M9", 9)

    CONNECTION("L5", 9, "J7", 5)
    CONNECTION("L7", 14, "J7", 4)
    CONNECTION(TRACK_CLOCK, "J7", 3)
    


    // Jump 3
    CONNECTION("JUMPSW3", 1_NO, "L9", 11)

    CONNECTION(VCC, "K8", 4)
    CONNECTION(ATTRACT_n, "K8", 2)
    CONNECTION("L9", 10, "K8", 3)
    CONNECTION("K6", 15, "K8", 1)

    CONNECTION("M9", 2, "K6", 7)
    CONNECTION(VCC, "K6", 10)
    CONNECTION(HALF_TRACK_CLOCK, "K6", 2)
    CONNECTION(LEAD7_n, "K6", 3)
    CONNECTION(LEAD3_n, "K6", 4)
    CONNECTION(LEAD3, "K6", 5)
    CONNECTION(GND, "K6", 6)
    CONNECTION("K8", 6, "K6", 9)
    CONNECTION(HIT3_n, "K6", 1)

    CONNECTION(HIT3_n, "K5", 4)
    CONNECTION(GND, "K5", 2)
    CONNECTION(GAME_RESET3_n, "K5", 3)
    CONNECTION("M9", 2, "K5", 1)

    CONNECTION("K6", 15, "H6", 2)
    CONNECTION("K5", 5, "H6", 3)

    CONNECTION("K6", 15, "M9", 1)

    CONNECTION("K5", 5, "J6", 13)
    CONNECTION("K6", 14, "J6", 2)
    CONNECTION(TRACK_CLOCK, "J6", 1)



    // Jump 4
    CONNECTION("JUMPSW4", 1_NO, "L9", 13)

    CONNECTION(VCC, "K8", 10)
    CONNECTION(ATTRACT_n, "K8", 12)
    CONNECTION("L9", 12, "K8", 11)
    CONNECTION("K7", 15, "K8", 13)

    CONNECTION("M9", 12, "K7", 7)
    CONNECTION(VCC, "K7", 10)
    CONNECTION(HALF_TRACK_CLOCK, "K7", 2)
    CONNECTION(LEAD7_n, "K7", 3)
    CONNECTION(LEAD4_n, "K7", 4)
    CONNECTION(LEAD4, "K7", 5)
    CONNECTION(GND, "K7", 6)
    CONNECTION("K8", 8, "K7", 9)
    CONNECTION(HIT4_n, "K7", 1)

    CONNECTION(HIT4_n, "K5", 10)
    CONNECTION(GND, "K5", 12)
    CONNECTION(GAME_RESET1_n, "K5", 11)
    CONNECTION("M9", 12, "K5", 13)

    CONNECTION("K7", 15, "H7", 2)
    CONNECTION("K5", 9, "H7", 3)

    CONNECTION("K7", 15, "M9", 13)

    CONNECTION("K5", 9, "J7", 13)
    CONNECTION("K7", 14, "J7", 2)
    CONNECTION(TRACK_CLOCK, "J7", 1)
    


    // Jump 5
    CONNECTION("JUMPSW5", 1_NO, "L9", 1)

    CONNECTION(VCC, "M8", 10)
    CONNECTION(ATTRACT_n, "M8", 12)
    CONNECTION("L9", 2, "M8", 11)
    CONNECTION("M7", 15, "M8", 13)

    CONNECTION("M9", 6, "M7", 7)
    CONNECTION(VCC, "M7", 10)
    CONNECTION(HALF_TRACK_CLOCK, "M7", 2)
    CONNECTION(LEAD7_n, "M7", 3)
    CONNECTION(LEAD5_n, "M7", 4)
    CONNECTION(LEAD5, "M7", 5)
    CONNECTION(GND, "M7", 6)
    CONNECTION("M8", 8, "M7", 9)
    CONNECTION(HIT5_n, "M7", 1)

    CONNECTION(HIT5_n, "M5", 10)
    CONNECTION(GND, "M5", 12)
    CONNECTION(GAME_RESET2_n, "M5", 11)
    CONNECTION("M9", 6, "M5", 13)

    CONNECTION("M7", 15, "H7", 5)
    CONNECTION("M5", 9, "H7", 6)

    CONNECTION("M7", 15, "M9", 5)

    CONNECTION("M5", 9, "J7", 9)
    CONNECTION("M7", 14, "J7", 10)
    CONNECTION(TRACK_CLOCK, "J7", 11)



    // Jump 6
    CONNECTION("JUMPSW6", 1_NO, "L9", 3)

    CONNECTION(VCC, "M8", 4)
    CONNECTION(ATTRACT_n, "M8", 2)
    CONNECTION("L9", 4, "M8", 3)
    CONNECTION("M6", 15, "M8", 1)

    CONNECTION("M9", 4, "M6", 7)
    CONNECTION(VCC, "M6", 10)
    CONNECTION(HALF_TRACK_CLOCK, "M6", 2)
    CONNECTION(LEAD7_n, "M6", 3)
    CONNECTION(LEAD6_n, "M6", 4)
    CONNECTION(LEAD6, "M6", 5)
    CONNECTION(GND, "M6", 6)
    CONNECTION("M8", 6, "M6", 9)
    CONNECTION(HIT6_n, "M6", 1)

    CONNECTION(HIT6_n, "M5", 4)
    CONNECTION(GND, "M5", 2)
    CONNECTION(GAME_RESET3_n, "M5", 3)
    CONNECTION("M9", 4, "M5", 1)

    CONNECTION("M6", 15, "H6", 5)
    CONNECTION("M5", 5, "H6", 6)

    CONNECTION("M6", 15, "M9", 3)

    CONNECTION(TRACK_CLOCK, "J6", 11)
    CONNECTION("M5", 5, "J6", 9)
    CONNECTION("M6", 14, "J6", 10)    




    // Coin
    CONNECTION("COIN", 1_NC, "J8", 12)
    CONNECTION("COIN", 2_NC, "J8", 13)

    CONNECTION("J8", 11, "CAP20", 1)

    CONNECTION("CAP20", 2, "H8", 5)

    CONNECTION(VCC, "DSW2", 1)
    CONNECTION(GND, "DSW2", 2)

    CONNECTION(GND, "DSW2", 4)
    CONNECTION(VCC, "DSW2", 5)

    CONNECTION(VCC, "E5", 4)
    CONNECTION("H8", 6, "E5", 2)
    CONNECTION(H256, "E5", 3)
    CONNECTION(VCC, "E5", 1)

    CONNECTION(VCC, "F6", 4)
    CONNECTION(Q_n, "F6", 2)
    CONNECTION(COIN, "F6", 3)
    CONNECTION("DSW2", 3, "F6", 1)

    CONNECTION("DSW2", 6, "E6", 8)
    CONNECTION("F6", 5, "E6", 9)

    CONNECTION("E6", 10, "E6", 11)
    CONNECTION("E5", 5, "E6", 12)
    
    CONNECTION("E6", 13, "D6", 5)

    CONNECTION(BUG_TRIG_n, "F6", 10)
    CONNECTION("F6", 5, "F6", 12)
    CONNECTION(COIN, "F6", 11)
    CONNECTION("DSW2", 3, "F6", 13)

    CONNECTION("E5", 6, "E6", 3)
    CONNECTION("F6", 5, "E6", 2)

    CONNECTION("E5", 6, "E6", 5)
    CONNECTION("F6", 9, "E6", 6)




    // Start
    CONNECTION("START", 1_NO, "H8", 13)

    CONNECTION(VCC, "F8", 4)
    CONNECTION(Q, "F8", 2)
    CONNECTION("H8", 12, "F8", 3)
    CONNECTION(Q, "F8", 1)

    CONNECTION("F8", 6, "D6", 3)
    CONNECTION("F8", 6, "D6", 11)



    // Latch (Formed by LM339 comparators @ J9)
    CONNECTION(HORSES, "H4", 5)
    CONNECTION(FINISH_LINE, "H4", 4)

    CONNECTION("H4", 6, "D7", 5)
    CONNECTION("D7", 3, "D7", 4)

    CONNECTION("D7", 6, "D7", 2)
    CONNECTION(Q, "D7", 1)

    CONNECTION("D7", 3, "LATCH", 1) // Set
    CONNECTION("H8", 6, "LATCH", 2) // Reset

    CONNECTION("LATCH", 3, "H8", 1)

    CONNECTION("H8", 2, "H8", 3)


    /**************************************************************************
    * Layout - Page 2                                                         *
	**************************************************************************/
    // Clock generation
    CONNECTION("XTAL", 1, "L1", 3)

    CONNECTION(VCC, "K1", 4)
    CONNECTION("K1", 6, "K1", 2)
    CONNECTION("L1", 4, "K1", 3)
    CONNECTION(VCC, "K1", 1)

    CONNECTION("K1", 6, "L1", 13)

    CONNECTION(VCC, "K1", 10)
    CONNECTION(H256, "K1", 12)
    CONNECTION("K1", 5, "K1", 11)
    CONNECTION(H256, "K1", 13)

    CONNECTION("K1", 8, "K2", 9)
    CONNECTION("K1", 5, "K2", 8)

    CONNECTION("K2", 10, "M1", 11)
    CONNECTION("K2", 10, "M1", 1)
    CONNECTION("K2", 10, "M1", 3)
    CONNECTION("K2", 10, "M1", 13)




    // HSYNC
    CONNECTION(VCC, "H2", 4)
    CONNECTION(CLOCK, "H2", 3)
    CONNECTION("H2", 6, "H2", 2)
    CONNECTION(VCC, "H2", 1)

    CONNECTION("H2", 5, "H1", 7)
    CONNECTION("H2", 5, "H1", 10)
    CONNECTION(CLOCK, "H1", 2)
    CONNECTION(VCC, "H1", 9)
    CONNECTION(VCC, "H1", 1)    

    CONNECTION("H1", 15, "F1", 7)
    CONNECTION("H1", 11, "F1", 10)
    CONNECTION(CLOCK, "F1", 2)
    CONNECTION(GND, "F1", 3)
    CONNECTION(GND, "F1", 4)
    CONNECTION(VCC, "F1", 5)
    CONNECTION(GND, "F1", 6)
    CONNECTION("D1", 6, "F1", 9)
    CONNECTION(VCC, "F1", 1)
    
    CONNECTION(H8, "B4", 4)
    CONNECTION("F1", 15, "B4", 5)

    CONNECTION("H1", 15, "D1", 4)
    CONNECTION("F1", 15, "D1", 5)

    CONNECTION("F1", 11, "L1", 9)

    CONNECTION("L1", 8, "H2", 10)
    CONNECTION(H64, "H2", 12)
    CONNECTION(H32, "H2", 11)
    CONNECTION(VCC, "H2", 13)

    CONNECTION(H64, "J2", 9)
    CONNECTION("H2", 9, "J2", 8)




    // VSYNC
    CONNECTION("RANDOM_CLOCK", 1, "H8", 11)

    CONNECTION(VCC, "E2", 10)
    CONNECTION(VCC, "E2", 12)
    CONNECTION("H8", 10, "E2", 11)
    CONNECTION(VRESET_n, "E2", 13)

    CONNECTION(VCC, "E2", 4)
    CONNECTION("E2", 8, "E2", 2)
    CONNECTION(VRESET, "E2", 3)
    CONNECTION(VCC, "E2", 1)

    CONNECTION(VCC, "C2", 4)
    CONNECTION("C2", 6, "C2", 2)
    CONNECTION(HSYNC, "C2", 3)
    CONNECTION(VCC, "C2", 1)

    CONNECTION(GND, "C3", 3)
    CONNECTION(GND, "C3", 4)
    CONNECTION(GND, "C3", 5)
    CONNECTION("E2", 6, "C3", 6)
    CONNECTION("C2", 5, "C3", 7)
    CONNECTION("C2", 5, "C3", 10)
    CONNECTION(HSYNC, "C3", 2)
    CONNECTION("D2", 12, "C3", 9)
    CONNECTION(VCC, "C3", 1)

    CONNECTION("E2", 6, "D3", 3)
    CONNECTION("E2", 6, "D3", 4)
    CONNECTION("E2", 6, "D3", 5)
    CONNECTION(GND, "D3", 6)
    CONNECTION("C3", 15, "D3", 7)
    CONNECTION("C3", 15, "D3", 10)
    CONNECTION(HSYNC, "D3", 2)
    CONNECTION("D2", 12, "D3", 9)
    CONNECTION(VCC, "D3", 1)

    //CONNECTION("D3", 15, "D2", 13)
    CONNECTION("D3", 15, "BUF1", 1)
    CONNECTION(VRESET, "D2", 13)

    CONNECTION("D3", 11, "D2", 11)

    CONNECTION(VCC, "E3", 4)
    CONNECTION(V256, "E3", 2)
    CONNECTION(V32, "E3", 3)
    CONNECTION(V256, "E3", 1)

    CONNECTION(VCC, "E3", 10)
    CONNECTION(V256, "E3", 12)
    CONNECTION(V4, "E3", 11)
    CONNECTION(V256, "E3", 13)

    CONNECTION(V256_n, "J2", 11)
    CONNECTION("E3", 9, "J2", 12)



    
    // Track Clock
    CONNECTION(C, "P5", 3)
    CONNECTION(B, "P5", 4)
    CONNECTION(A_n, "P5", 5)
    CONNECTION(A, "P5", 6)
    CONNECTION(VCC, "P5", 7)
    CONNECTION(V256, "P5", 10)
    CONNECTION(V16, "P5", 2)
    CONNECTION("M1", 8, "P5", 9)
    CONNECTION(VCC, "P5", 1)

    CONNECTION("P5", 15, "M1", 9)

    CONNECTION(TRACK, "D1", 1)
    CONNECTION("P5", 15, "D1", 2)

    CONNECTION(VCC, "E1", 10)
    CONNECTION("E1", 8, "E1", 12)
    CONNECTION("D1", 3, "E1", 11)
    CONNECTION(VCC, "E1", 13)

    CONNECTION("E1", 9, "D2", 1)

    CONNECTION("E1", 9, "D2", 3)

    CONNECTION("D1", 3, "D2", 5)

    CONNECTION("D2", 6, "D1", 12)
    CONNECTION("B2", 15, "D1", 13)

    CONNECTION("D1", 11, "C2", 10)
    CONNECTION("C2", 8, "C2", 12)
    CONNECTION(BUFFERED_CLOCK, "C2", 11)
    CONNECTION(VCC, "C2", 13)

    CONNECTION("C2", 9, "A2", 7)
    CONNECTION("C2", 9, "A2", 10)
    CONNECTION(BUFFERED_CLOCK, "A2", 2)
    CONNECTION(VCC, "A2", 9)
    CONNECTION(ATTRACT_n, "A2", 1)

    CONNECTION(GND, "B2", 3)
    CONNECTION(GND, "B2", 4)
    CONNECTION(VCC, "B2", 5)
    CONNECTION(GND, "B2", 6)
    CONNECTION("A2", 15, "B2", 7)
    CONNECTION("A2", 15, "B2", 10)
    CONNECTION(BUFFERED_CLOCK, "B2", 2)
    CONNECTION("D2", 8, "B2", 9)
    CONNECTION(VCC, "B2", 1)

    CONNECTION("B2", 15, "D2", 9)

    CONNECTION("B2", 14, "CAP68", 1)

    CONNECTION("A2", 15, "D1", 10)
    CONNECTION("CAP68", 2, "D1", 9)

    CONNECTION("D1", 8, "BUF2", 1)

    CONNECTION("C2", 8, "B1", 7)
    CONNECTION("CAP68", 2, "B1", 10)
    CONNECTION(BUFFERED_CLOCK, "B1", 2)
    CONNECTION(GND, "B1", 3)
    CONNECTION("B2", 12, "B1", 4)
    CONNECTION("B2", 13, "B1", 5)
    CONNECTION("A1", 11, "B1", 6)
    //CONNECTION("D1", 8, "B1", 9)
    CONNECTION("BUF2", 2, "B1", 9)
    CONNECTION("C1", 11, "B1", 1)

    CONNECTION(VCC, "A1", 9)
    //CONNECTION("D1", 8, "A1", 8)
    CONNECTION("BUF2", 2, "A1", 8)
    CONNECTION("F4", 3, "A1", 1)
    CONNECTION("F4", 3, "A1", 2)

    CONNECTION(HRESET_n, "J2", 3)
    CONNECTION(RAND, "J2", 2)

    CONNECTION("A1", 11, "F4", 1)
    CONNECTION("J2", 1, "F4", 2)

    CONNECTION(ATTRACT_n, "C1", 9)
    //CONNECTION("D1", 8, "C1", 8)
    CONNECTION("BUF2", 2, "C1", 8)
    CONNECTION("J1", 6, "C1", 1)
    CONNECTION("J1", 6, "C1", 2)

    CONNECTION("C1", 11, "J1", 5)
    CONNECTION(HSYNC, "J1", 4)




    // Frame Counter
    CONNECTION(VCC, "DSW1", 1)
    CONNECTION(GND, "DSW1", 2)

    CONNECTION(GND, "H3", 3)
    CONNECTION(GND, "H3", 4)
    CONNECTION("DSW1", 3, "H3", 5)
    CONNECTION(GND, "H3", 6)
    CONNECTION(VCC, "H3", 7)
    CONNECTION(VCC, "H3", 10)
    CONNECTION(VF1, "H3", 2)
    CONNECTION("L1", 10, "H3", 9)
    CONNECTION(VCC, "H3", 1)

    CONNECTION("H3", 15, "L1", 11)

    CONNECTION(VCC, "B7", 8)
    CONNECTION("H3", 15, "B7", 9)
    CONNECTION(VCC, "B7", 11)
    CONNECTION(VCC, "B7", 10)

    CONNECTION(ATTRACT_n, "F3", 11)
    CONNECTION(VRESET, "F3", 9)
    CONNECTION(F8, "F3", 10)

    CONNECTION("F3", 8, "J3", 2)
    CONNECTION(F4, "J3", 1)
    CONNECTION(F2, "J3", 14)
    CONNECTION(F1, "J3", 15)

    CONNECTION("J3", 13, "K3", 13)
    CONNECTION("J3", 12, "K3", 3)
    CONNECTION("J3", 11, "K3", 11)
    CONNECTION("J3", 10, "K3", 5)
    CONNECTION("J3", 9, "K3", 9)
    CONNECTION("J3", 3, "K3", 1)

    CONNECTION("J3", 4, "J1", 1)
    CONNECTION(F16, "J1", 2)



    // TC1
    CONNECTION(REV1, "K2", 6)
    CONNECTION(FWD1, "K2", 5)

    CONNECTION(VCC, "N2", 7)
    CONNECTION(VCC, "N2", 10)
    CONNECTION(HCLOCK1, "N2", 2)
    CONNECTION("K2", 4, "N2", 3)
    CONNECTION(REV1, "N2", 4)
    CONNECTION(GND, "N2", 5)
    CONNECTION(GND, "N2", 6)
    CONNECTION("P7", 2, "N2", 9)
    CONNECTION(GAME_RESET1_n, "N2", 1)

    CONNECTION("N2", 15, "P2", 7)
    CONNECTION("N2", 15, "P2", 10)
    CONNECTION(HCLOCK1, "P2", 2)
    CONNECTION(VCC, "P2", 9)
    CONNECTION(GAME_RESET1_n, "P2", 1)

    CONNECTION("P2", 15, "P7", 1)



    // TC2
    CONNECTION(REV2, "K4", 5)
    CONNECTION(FWD2, "K4", 6)

    CONNECTION(VCC, "N3", 7)
    CONNECTION(VCC, "N3", 10)
    CONNECTION(HCLOCK1, "N3", 2)
    CONNECTION("K4", 4, "N3", 3)
    CONNECTION(REV2, "N3", 4)
    CONNECTION(GND, "N3", 5)
    CONNECTION(GND, "N3", 6)
    CONNECTION("P7", 4, "N3", 9)
    CONNECTION(GAME_RESET2_n, "N3", 1)

    CONNECTION("N3", 15, "P3", 7)
    CONNECTION("N3", 15, "P3", 10)
    CONNECTION(HCLOCK1, "P3", 2)
    CONNECTION(VCC, "P3", 9)
    CONNECTION(GAME_RESET2_n, "P3", 1)

    CONNECTION("P3", 15, "P7", 3)



    // TC3
    CONNECTION(REV3, "K4", 9)
    CONNECTION(FWD3, "K4", 8)

    CONNECTION(VCC, "N4", 7)
    CONNECTION(VCC, "N4", 10)
    CONNECTION(HCLOCK2, "N4", 2)
    CONNECTION("K4", 10, "N4", 3)
    CONNECTION(REV3, "N4", 4)
    CONNECTION(GND, "N4", 5)
    CONNECTION(GND, "N4", 6)
    CONNECTION("P7", 6, "N4", 9)
    CONNECTION(GAME_RESET3_n, "N4", 1)

    CONNECTION("N4", 15, "P4", 7)
    CONNECTION("N4", 15, "P4", 10)
    CONNECTION(HCLOCK2, "P4", 2)
    CONNECTION(VCC, "P4", 9)
    CONNECTION(GAME_RESET3_n, "P4", 1)

    CONNECTION("P4", 15, "P7", 5)




    // TC4
    CONNECTION(REV4, "K2", 3)
    CONNECTION(FWD4, "K2", 2)

    CONNECTION(VCC, "L2", 7)
    CONNECTION(VCC, "L2", 10)
    CONNECTION(HCLOCK2, "L2", 2)
    CONNECTION("K2", 1, "L2", 3)
    CONNECTION(REV4, "L2", 4)
    CONNECTION(GND, "L2", 5)
    CONNECTION(GND, "L2", 6)
    CONNECTION("P7", 8, "L2", 9)
    CONNECTION(GAME_RESET1_n, "L2", 1)

    CONNECTION("L2", 15, "M2", 7)
    CONNECTION("L2", 15, "M2", 10)
    CONNECTION(HCLOCK2, "M2", 2)
    CONNECTION(VCC, "M2", 9)
    CONNECTION(GAME_RESET1_n, "M2", 1)

    CONNECTION("M2", 15, "P7", 9)




    // TC5
    CONNECTION(REV5, "K2", 12)
    CONNECTION(FWD5, "K2", 11)

    CONNECTION(VCC, "L3", 7)
    CONNECTION(VCC, "L3", 10)
    CONNECTION(HCLOCK3, "L3", 2)
    CONNECTION("K2", 13, "L3", 3)
    CONNECTION(REV5, "L3", 4)
    CONNECTION(GND, "L3", 5)
    CONNECTION(GND, "L3", 6)
    CONNECTION("P7", 10, "L3", 9)
    CONNECTION(GAME_RESET2_n, "L3", 1)

    CONNECTION("L3", 15, "M3", 7)
    CONNECTION("L3", 15, "M3", 10)
    CONNECTION(HCLOCK3, "M3", 2)
    CONNECTION(VCC, "M3", 9)
    CONNECTION(GAME_RESET2_n, "M3", 1)

    CONNECTION("M3", 15, "P7", 11)




    // TC6
    CONNECTION(REV6, "K4", 2)
    CONNECTION(FWD6, "K4", 3)

    CONNECTION(VCC, "L4", 7)
    CONNECTION(VCC, "L4", 10)
    CONNECTION(HCLOCK3, "L4", 2)
    CONNECTION("K4", 1, "L4", 3)
    CONNECTION(REV6, "L4", 4)
    CONNECTION(GND, "L4", 5)
    CONNECTION(GND, "L4", 6)
    CONNECTION("P7", 12, "L4", 9)
    CONNECTION(GAME_RESET3_n, "L4", 1)

    CONNECTION("L4", 15, "M4", 7)
    CONNECTION("L4", 15, "M4", 10)
    CONNECTION(HCLOCK3, "M4", 2)
    CONNECTION(VCC, "M4", 9)
    CONNECTION(GAME_RESET3_n, "M4", 1)

    CONNECTION("M4", 15, "P7", 13)




    // TC7
    CONNECTION(VCC, "N1", 7)
    CONNECTION(VCC, "N1", 10)
    CONNECTION(HCLOCK4, "N1", 2)
    CONNECTION(FWD7_n, "N1", 3)
    CONNECTION(GND, "N1", 4)
    CONNECTION(GND, "N1", 5)
    CONNECTION(GND, "N1", 6)
    CONNECTION("M1", 6, "N1", 9)
    CONNECTION(BUG_TRIG_n, "N1", 1)

    CONNECTION("N1", 15, "P1", 7)
    CONNECTION("N1", 15, "P1", 10)
    CONNECTION(HCLOCK4, "P1", 2)
    CONNECTION(VCC, "P1", 9)
    CONNECTION(BUG_TRIG_n, "P1", 1)

    CONNECTION("P1", 15, "M1", 5)

    CONNECTION("N1", 12, "B4", 2)
    CONNECTION("P1", 14, "B4", 1)

    CONNECTION("M1", 6, "J4", 10)
    CONNECTION(GND, "J4", 12)
    CONNECTION("B4", 3, "J4", 11)
    CONNECTION(VCC, "J4", 13)

    CONNECTION("J4", 8, "K4", 11)
    CONNECTION(PICKET_n, "K4", 12)

    CONNECTION(VCC, "J4", 4)
    CONNECTION(VCC, "J4", 2)
    CONNECTION("K4", 13, "J4", 3)
    CONNECTION(VF1, "J4", 1)



    // LEAD 1-7
    CONNECTION(TC7, "C6", 1)
    CONNECTION(TC7, "C6", 2)
    CONNECTION(TC7, "C6", 4)
    CONNECTION(VRESET, "C6", 5)

    CONNECTION("C6", 6, "H8", 9)

    CONNECTION(VCC, "P6", 5)
    CONNECTION(TC1_n, "P6", 4)
    CONNECTION(TC2_n, "P6", 2)
    CONNECTION(TC3_n, "P6", 1)
    CONNECTION(TC4_n, "P6", 11)
    CONNECTION(TC5_n, "P6", 12)
    CONNECTION(TC6_n, "P6", 3)
    CONNECTION(VCC, "P6", 6)

    CONNECTION("P6", 8, "H4", 1)
    CONNECTION(VRESET, "H4", 2)

    CONNECTION(VCC, "E1", 4)
    CONNECTION(VCC, "E1", 2)
    CONNECTION(TC7, "E1", 3)
    CONNECTION("H4", 3, "E1", 1)

    CONNECTION("H4", 3, "D6", 9)

    CONNECTION(TC1, "N7", 4)
    CONNECTION(TC2, "N7", 5)
    CONNECTION(TC3, "N7", 12)
    CONNECTION(TC4, "N7", 13)
    CONNECTION("D6", 8, "N7", 9)
    CONNECTION(VCC, "N7", 1)

    CONNECTION(TC5, "N6", 4)
    CONNECTION(TC6, "N6", 5)
    CONNECTION(H128, "N6", 12)
    CONNECTION(H64, "N6", 13)
    CONNECTION("D6", 8, "N6", 9)
    CONNECTION(VCC, "N6", 1)

    CONNECTION(VCC, "A4", 10)
    CONNECTION(H32, "A4", 12)
    CONNECTION("D6", 8, "A4", 11)
    CONNECTION(VCC, "A4", 13)



    // Gallop
    CONNECTION(ATTRACT, "F7", 2)
    CONNECTION(ATTRACT, "F7", 3)
    CONNECTION(HALF_TRACK_CLOCK, "F7", 14)
    CONNECTION("F7", 12, "F7", 1)

    CONNECTION("F7", 11, "J8", 9)
    CONNECTION(VCC, "J8", 10)

    CONNECTION(V64, "F4", 12)
    CONNECTION(X3, "F4", 13)

    CONNECTION(V64, "H4", 9)
    CONNECTION(X3, "H4", 10)
    
    CONNECTION(V32, "J8", 4)
    CONNECTION(X4_n, "J8", 5)

    CONNECTION("H4", 8, "F4", 5)
    CONNECTION("J8", 6, "F4", 4)



    // Hit
    CONNECTION(H128, "F2", 11)
    CONNECTION(H64, "F2", 10)
    CONNECTION(H32, "F2", 9)

    CONNECTION(HORSES_n, "F2", 2)
    CONNECTION(PICKET_n, "F2", 1)
    CONNECTION("J5", 15, "F2", 13)

    CONNECTION(HRESET_n, "A4", 4)
    CONNECTION("F2", 8, "A4", 2)
    CONNECTION("F2", 12, "A4", 3)
    CONNECTION(VCC, "A4", 1)

    CONNECTION("A4", 5, "N5", 2)
    CONNECTION(V128, "N5", 1)
    CONNECTION(V64, "N5", 14)
    CONNECTION(V32, "N5", 15)


    
    // Horses
    CONNECTION(Q_n, "F3", 3)
    CONNECTION(F8, "F3", 5)
    CONNECTION(F4, "F3", 4)
    
    CONNECTION(GND, "N8", 1)
    CONNECTION(LEAD1, "N8", 2)
    CONNECTION(LEAD2, "N8", 3)
    CONNECTION(LEAD3, "N8", 4)
    CONNECTION(LEAD4, "N8", 5)
    CONNECTION(LEAD5, "N8", 6)
    CONNECTION(LEAD6, "N8", 7)
    CONNECTION(GND, "N8", 9)
    CONNECTION(V128, "N8", 13)
    CONNECTION(V64, "N8", 12)
    CONNECTION(V32, "N8", 11)
    CONNECTION("F3", 6, "N8", 10)

    CONNECTION("N8", 14, "C6", 13)
    CONNECTION(V16, "C6", 9)
    CONNECTION(VBLANK_n, "C6", 10)
    CONNECTION(HBLANK_n, "C6", 12)

    CONNECTION(GND, "F5", 1)
    CONNECTION(VCC, "F5", 2)
    CONNECTION(PLAY4, "F5", 3)
    CONNECTION(PLAY6, "F5", 4)
    CONNECTION(VCC, "F5", 5)
    CONNECTION(PLAY4, "F5", 6)
    CONNECTION(PLAY6, "F5", 7)
    CONNECTION(VCC, "F5", 9)
    CONNECTION(V128, "F5", 13)
    CONNECTION(V64, "F5", 12)
    CONNECTION(V32, "F5", 11)
    CONNECTION("C6", 8, "F5", 10)

    CONNECTION(GND, "P8", 1)
    CONNECTION(TC1, "P8", 2)
    CONNECTION(TC2, "P8", 3)
    CONNECTION(TC3, "P8", 4)
    CONNECTION(TC4, "P8", 5)
    CONNECTION(TC5, "P8", 6)
    CONNECTION(TC6, "P8", 7)
    CONNECTION(TC7, "P8", 9)
    CONNECTION(V128, "P8", 13)
    CONNECTION(V64, "P8", 12)
    CONNECTION(V32, "P8", 11)
    CONNECTION(V256_n, "P8", 10)

    CONNECTION(GND, "H5", 1)
    CONNECTION(JUMP1, "H5", 2)
    CONNECTION(JUMP2, "H5", 3)
    CONNECTION(JUMP3, "H5", 4)
    CONNECTION(JUMP4, "H5", 5)
    CONNECTION(JUMP5, "H5", 6)
    CONNECTION(JUMP6, "H5", 7)
    CONNECTION(JUMP7, "H5", 9)
    CONNECTION(V128, "H5", 13)
    CONNECTION(V64, "H5", 12)
    CONNECTION(V32, "H5", 11)
    CONNECTION(V256_n, "H5", 10)

    CONNECTION(GND, "J5", 1)
    CONNECTION(FALL1, "J5", 2)
    CONNECTION(FALL2, "J5", 3)
    CONNECTION(FALL3, "J5", 4)
    CONNECTION(FALL4, "J5", 5)
    CONNECTION(FALL5, "J5", 6)
    CONNECTION(FALL6, "J5", 7)
    CONNECTION(GND, "J5", 9)
    CONNECTION(V128, "J5", 13)
    CONNECTION(V64, "J5", 12)
    CONNECTION(V32, "J5", 11)
    CONNECTION(V256_n, "J5", 10)

    CONNECTION("J5", 14, "H4", 12)
    CONNECTION("H5", 14, "H4", 13)

    CONNECTION(GALLOP_A, "E4", 3)
    CONNECTION("H4", 11, "E4", 2)

    CONNECTION("H4", 11, "E4", 12)
    CONNECTION(GALLOP_B, "E4", 11)

    CONNECTION("H5", 15, "E4", 6)
    CONNECTION("E4", 1, "E4", 5)

    CONNECTION(V1, "C4", 5)
    CONNECTION(V2, "C4", 6)
    CONNECTION(V4, "C4", 7)
    CONNECTION(V8, "C4", 4)
    CONNECTION(H32, "C4", 3)
    CONNECTION("E4", 4, "C4", 2)
    CONNECTION("E4", 13, "C4", 1)
    CONNECTION("H4", 11, "C4", 15)
    CONNECTION(GND, "C4", 13)
    CONNECTION(GND, "C4", 14)

    CONNECTION(V1, "D4", 5)
    CONNECTION(V2, "D4", 6)
    CONNECTION(V4, "D4", 7)
    CONNECTION(V8, "D4", 4)
    CONNECTION(H32, "D4", 3)
    CONNECTION("E4", 4, "D4", 2)
    CONNECTION("E4", 13, "D4", 1)
    CONNECTION("H4", 11, "D4", 15)
    CONNECTION(GND, "D4", 13)
    CONNECTION(GND, "D4", 14)

    CONNECTION(H256, "E5", 10)
    CONNECTION(GND, "E5", 12)
    CONNECTION("P8", 14, "E5", 11)
    CONNECTION(VCC, "E5", 13)

    CONNECTION(H16, "J1", 9)
    CONNECTION(H256, "J1", 10)

    CONNECTION("J1", 8, "CAP3", 1)

    CONNECTION(H32, "J1", 12)
    CONNECTION("CAP3", 2, "J1", 13)

    CONNECTION(GND, "C5", 10)
    CONNECTION(HCLOCK4, "C5", 2)
    CONNECTION("E5", 9, "C5", 15)
    CONNECTION("CAP3", 2, "C5", 1)
    CONNECTION("C4", 12, "C5", 11)
    CONNECTION("C4", 11, "C5", 12)
    CONNECTION("C4", 10, "C5", 13)
    CONNECTION("C4", 9, "C5", 14)
    CONNECTION("D4", 12, "C5", 3)
    CONNECTION("D4", 11, "C5", 4)
    CONNECTION("D4", 10, "C5", 5)
    CONNECTION("D4", 9, "C5", 6)

    CONNECTION("C5", 9, "D5", 10)
    CONNECTION(HCLOCK4, "D5", 2)
    CONNECTION("E5", 9, "D5", 15)
    CONNECTION("J1", 11, "D5", 1)
    CONNECTION("C4", 12, "D5", 11)
    CONNECTION("C4", 11, "D5", 12)
    CONNECTION("C4", 10, "D5", 13)
    CONNECTION("C4", 9, "D5", 14)
    CONNECTION("D4", 12, "D5", 3)
    CONNECTION("D4", 11, "D5", 4)
    CONNECTION("D4", 10, "D5", 5)
    CONNECTION("D4", 9, "D5", 6)

    CONNECTION("D5", 9, "F3", 2)
    CONNECTION("E5", 8, "F3", 1)
    CONNECTION("F5", 15, "F3", 13)

    CONNECTION("F3", 12, "J2", 5)
    CONNECTION("F3", 12, "J2", 6)




    // Video Summing
    CONNECTION(T1, "A3", 9)
    CONNECTION(T2, "A3", 10)

    CONNECTION(TRACK, "A3", 4)
    CONNECTION("A3", 8, "A3", 5)

    CONNECTION(H2, "F4", 9)
    CONNECTION(V2, "F4", 10)

    CONNECTION("F4", 8, "A3", 13)
    CONNECTION(FINISH_LINE, "A3", 12)

    CONNECTION(H256_n, "A3", 1)
    CONNECTION(H64, "A3", 2)

    CONNECTION("A3", 3, "B4", 12)
    CONNECTION(HORSES_n, "B4", 13)

    CONNECTION(V16, "B3", 5)
    CONNECTION(V8, "B3", 4)
    CONNECTION(V4, "B3", 2)
    CONNECTION(PICKET_LINE, "B3", 1)

    CONNECTION("A3", 6, "B3", 10)
    CONNECTION("A3", 11, "B3", 12)
    CONNECTION("B4", 11, "B3", 13)
    CONNECTION("B3", 6, "B3", 9)

    CONNECTION("F5", 15, "B4", 10)
    CONNECTION("B3", 8, "B4", 9)

    CONNECTION("VIDEO", 1, "B4", 8)
    CONNECTION("VIDEO", Video::HBLANK_PIN, HSYNC)
    CONNECTION("VIDEO", Video::VBLANK_PIN, VSYNC)

    // Audio
    CONNECTION(CLOCK, "C7", 14) // Test clock
    CONNECTION("C7", 12, "C7", 1) // Counter loopback
    // CONNECTION(VCC, "C7", 5)
    // CONNECTION(GND, "C7", 10)

    CONNECTION("C7", 12, "C8", 10)
    CONNECTION("C7", 9, "C8", 11)
    CONNECTION("C7", 8, "C8", 12)
    CONNECTION("C7", 11, "C8", 13)
    CONNECTION(VCC, "C8", 14) // TODO: Note Inc instead.
    CONNECTION(GND, "C8", 15)
    CONNECTION(VCC, "C8", 16)

    //CONNECTION("AUDIO", 1, "C1", 6)
    //CONNECTION("AUDIO", i1, "AUDIO", Audio::OUTPUT_MONO)


#ifdef DEBUG
    CONNECTION(COIN, "LOG1", 1)
    CONNECTION(Q, "LOG1", 2)
    CONNECTION(Q_n, "LOG1", 3)
    CONNECTION(BUG_TRIG_n, "LOG1", 4)
    CONNECTION("E5", 5, "LOG1", 5)
    CONNECTION("F6", 6, "LOG1", 6)
    CONNECTION("F6", 8, "LOG1", 7)
    CONNECTION("LATCH", 3, "LOG1", 8)
    CONNECTION("E6", 10, "LOG1", 9)
    CONNECTION(VSYNC, "LOG1", 10)
    CONNECTION(ATTRACT, "LOG1", 11)
    CONNECTION(ATTRACT_n, "LOG1", 12)
    CONNECTION("JUMPSW1", 1, "LOG1", 13)
    CONNECTION("C7", 12, "LOG1", 14) // COUNT0
    CONNECTION("C7", 9, "LOG1", 15) // COUNT1
    CONNECTION("C7", 8, "LOG1", 16) // COUNT2
    CONNECTION("C7", 11, "LOG1", 17) // COUNT3
    CONNECTION("C8", 1, "LOG1", 18) // BUG1
    CONNECTION("C8", 2, "LOG1", 19) // BUG2
    CONNECTION("C8", 3, "LOG1", 20) // BUG3
    CONNECTION("C8", 4, "LOG1", 21) // BUG4
    CONNECTION("C8", 5, "LOG1", 22) // BUG5, unused?
    CONNECTION("C8", 6, "LOG1", 23) // BUG6
    CONNECTION("C8", 7, "LOG1", 24) // BUG7
    CONNECTION("C8", 9, "LOG1", 25) // BUG8

    //CONNECTION("RANDOM_CLOCK", 1, "LOG1", 1)
    //CONNECTION(RAND, "LOG1", 2)
#endif

CIRCUIT_LAYOUT_END

