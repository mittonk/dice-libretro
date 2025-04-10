#include "input.h"
#include "../circuit.h"
#include "../settings.h"
#include "../libretro.h"

#ifdef MANYMOUSE
#include "../manymouse/manymouse.h"
#endif
//#include <SDL.h>

//using namespace phoenix;

extern retro_environment_t environ_cb;
extern retro_log_printf_t log_cb;

static const double INPUT_POLL_RATE = 10.0e-3; // 10 ms poll rate

extern CUSTOM_LOGIC( clock );

CHIP_DESC( PADDLE1_HORIZONTAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc((&AnalogInputDesc<0, true>::analog_input))
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE2_HORIZONTAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc(&AnalogInputDesc<1, true>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE3_HORIZONTAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc((&AnalogInputDesc<2, true>::analog_input))
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE4_HORIZONTAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc(&AnalogInputDesc<3, true>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};




CHIP_DESC( PADDLE1_VERTICAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc(&AnalogInputDesc<0, false>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE2_VERTICAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),

    ChipDesc(&AnalogInputDesc<1, false>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE3_VERTICAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc(&AnalogInputDesc<2, false>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};

CHIP_DESC( PADDLE4_VERTICAL_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),

    ChipDesc(&AnalogInputDesc<3, false>::analog_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};


static const double ANALOG_THRESHOLD = 0.20; // Joystick dead zone, TODO: make configurable?
static const double ANALOG_SCALE = 1.0 / (1.0 - ANALOG_THRESHOLD);


template <unsigned PADDLE, bool HORIZONTAL>
void AnalogInputDesc<PADDLE, HORIZONTAL>::analog_input(Chip* chip, int mask)
{
    Circuit* circuit = chip->circuit;
    //const Settings::Input::Paddle& settings = circuit->settings.input.paddle[PADDLE];
   const RetromouseSettings& retromouse_settings = circuit->input.retromouse_settings[PADDLE];
#ifdef MANYMOUSE
   const ManymouseSettings& manymouse_settings = circuit->input.manymouse_settings[PADDLE];
#endif
   
    AnalogInputDesc<PADDLE, HORIZONTAL>* desc = (AnalogInputDesc<PADDLE, HORIZONTAL>*)chip->custom_data;
    
    double delta = 0.0;
   unsigned joystick_idx = PADDLE;
   unsigned controller = PADDLE;
 

   struct retro_variable var = {0};
   char buffer[50];
    if(circuit->input.retromouse_enabled[PADDLE])
    {
        // Scale sensitivity by total paddle range
        double sensitivity = double(circuit->input.paddle_retromouse_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;
        
        if(HORIZONTAL && retromouse_settings.settings_x_axis_axis == 0) // Horizontal, using mouse x-axis
            delta += circuit->input.getRetroRelativeMouseX(PADDLE) * sensitivity;
        else if(HORIZONTAL) // Horizontal, using mouse y-axis
            delta += circuit->input.getRetroRelativeMouseY(PADDLE) * sensitivity;
        else if(retromouse_settings.settings_y_axis_axis == 0) // Vertical, using mouse x-axis
            delta += circuit->input.getRetroRelativeMouseX(PADDLE) * sensitivity;
        else // Vertical, using mouse y-axis
            delta += circuit->input.getRetroRelativeMouseY(PADDLE) * sensitivity;
    }

#ifdef MANYMOUSE
   int settings_manymouse_sensitivity = 500;  // TODO (mittonk): Core setting

    if(circuit->input.manymouse_enabled[PADDLE])
    {
        // Scale sensitivity by total paddle range
        double sensitivity = double(settings_manymouse_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;
        
        if(HORIZONTAL && manymouse_settings.settings_x_axis_axis == 0) // Horizontal, using mouse x-axis
            delta += circuit->input.getManymouseRelativeMouseX(manymouse_settings.settings_x_axis_mouse) * sensitivity;
        else if(HORIZONTAL) // Horizontal, using mouse y-axis
            delta += circuit->input.getManymouseRelativeMouseY(manymouse_settings.settings_x_axis_mouse) * sensitivity;
        else if(manymouse_settings.settings_y_axis_axis == 0) // Vertical, using mouse x-axis
            delta += circuit->input.getManymouseRelativeMouseX(manymouse_settings.settings_y_axis_mouse) * sensitivity;
        else // Vertical, using mouse y-axis
            delta += circuit->input.getManymouseRelativeMouseY(manymouse_settings.settings_y_axis_mouse) * sensitivity;
    }
#endif
 
    //if(settings.use_keyboard && HORIZONTAL)
   if ((!circuit->input.paddle_joystick_absolute) && HORIZONTAL)
    {
        double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1000000000.0;
        double sensitivity = double(circuit->input.paddle_keyboard_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;

       /* switch(settings.left.type)
        {
            case KeyAssignment::KEYBOARD:
                delta -= circuit->input.getKeyboardState(settings.left.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON: */
       delta -= circuit->input.getJoystickButton(controller, RETRO_DEVICE_ID_JOYPAD_LEFT) * dt * sensitivity;
       // Right
      delta += circuit->input.getJoystickButton(controller, RETRO_DEVICE_ID_JOYPAD_RIGHT) * dt * sensitivity;

         /*       break;
            case KeyAssignment::JOYSTICK_AXIS:
            {
                double val = circuit->input.getJoystickAxis(settings.left.joystick, settings.left.button >> 1) / 32768.0;
          */
       unsigned axis_idx = HORIZONTAL ? 0 : 1;
       sensitivity = double(circuit->input.paddle_joystick_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;

       double val = circuit->input.getJoystickAxis(joystick_idx, axis_idx) / 32768.0;
                if(val > ANALOG_THRESHOLD) // && (settings.left.button & 1))
                    delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                else if(val < -ANALOG_THRESHOLD)  //&& !(settings.left.button & 1))
                    delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
          /*
                break;
            }
            default: break;
        }
        switch(settings.right.type)
        {
            case KeyAssignment::KEYBOARD:
                delta += circuit->input.getKeyboardState(settings.right.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON:
                delta += circuit->input.getJoystickButton(settings.right.joystick, settings.right.button) * dt * sensitivity;
                break; */
 
 /*           case KeyAssignment::JOYSTICK_AXIS:
            {
                double val = circuit->input.getJoystickAxis(settings.right.joystick, settings.right.button >> 1) / 32768.0;
                if(val > ANALOG_THRESHOLD && (settings.right.button & 1))
                    delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                else if(val < -ANALOG_THRESHOLD && !(settings.right.button & 1))
                    delta -= (val + ANALOG_THRESHOLD) * dt * sensitivity;
                break;
            }
            default: break;
        } */
    }
    else if(!circuit->input.paddle_joystick_absolute /*settings.use_keyboard */) // vertical
    {
        double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1000000000.0;
        double sensitivity = double(circuit->input.paddle_keyboard_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;

       delta += circuit->input.getJoystickButton(controller, RETRO_DEVICE_ID_JOYPAD_DOWN) * dt * sensitivity;
       delta -= circuit->input.getJoystickButton(controller, RETRO_DEVICE_ID_JOYPAD_UP) * dt * sensitivity;
       
        /*switch(settings.down.type)
        {
            case KeyAssignment::KEYBOARD:
                delta += circuit->input.getKeyboardState(settings.down.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON:
                delta += circuit->input.getJoystickButton(settings.down.joystick, settings.down.button) * dt *sensitivity;
                break;
            case KeyAssignment::JOYSTICK_AXIS:
            {
                double val = circuit->input.getJoystickAxis(settings.down.joystick, settings.down.button >> 1) / 32768.0;
                if(val > ANALOG_THRESHOLD && (settings.down.button & 1))
                    delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                else if(val < -ANALOG_THRESHOLD && !(settings.down.button & 1))
                    delta -= (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                break;
         */
       unsigned axis_idx = HORIZONTAL ? 0 : 1;
        sensitivity = double(circuit->input.paddle_joystick_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;

       double val = circuit->input.getJoystickAxis(joystick_idx, axis_idx) / 32768.0;

       if(val < -ANALOG_THRESHOLD) // && !(settings.left.button & 1))
            delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
        if(val > ANALOG_THRESHOLD )//&& (settings.right.button & 1))
            delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;

       
       //else if(val < -ANALOG_THRESHOLD)  //&& !(settings.left.button & 1))
                  //  delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;

       /*
            }
            default: break;
        }
        switch(settings.up.type)
        {
            case KeyAssignment::KEYBOARD:
                delta -= circuit->input.getKeyboardState(settings.up.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON:
                delta -= circuit->input.getJoystickButton(settings.up.joystick, settings.up.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_AXIS:
            {
                double val = circuit->input.getJoystickAxis(settings.up.joystick, settings.up.button >> 1) / 32768.0;
                if(val > ANALOG_THRESHOLD && (settings.up.button & 1))
                    delta -= (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                else if(val < -ANALOG_THRESHOLD && !(settings.up.button & 1))
                    delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                break;
            }
            default: break;
        } */
    }
    /*
    if(settings.use_joystick && settings.joystick_mode == Settings::Input::JOYSTICK_RELATIVE)
    {
        double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1000000000.0;
        double sensitivity = double(settings.joystick_sensitivity) * fabs(desc->max_val - desc->min_val) / 100000.0;

        Settings::Input::JoystickAxis joystick = HORIZONTAL ? settings.joy_x_axis : settings.joy_y_axis;

        double val = circuit->input.getJoystickAxis(joystick.joystick, joystick.axis) / 32768.0;
        if(val > ANALOG_THRESHOLD)
            delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
        else if(val < -ANALOG_THRESHOLD)
            delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
    }
     */

    double prev_val = desc->current_val;
    
    if(desc->max_val > desc->min_val)
    {
        desc->current_val += delta;
        if(desc->current_val > desc->max_val)      desc->current_val = desc->max_val;
        else if(desc->current_val < desc->min_val) desc->current_val = desc->min_val;
    }
    else // swap max,min values for reversed paddle direction
    {
        desc->current_val -= delta;
        if(desc->current_val < desc->max_val)      desc->current_val = desc->max_val;
        else if(desc->current_val > desc->min_val) desc->current_val = desc->min_val;
    }
     
   
    // Absolute Joystick - Overrides deltas
    //if(settings.use_joystick && settings.joystick_mode == Settings::Input::JOYSTICK_ABSOLUTE)
    if (circuit->input.paddle_joystick_absolute || 
          (circuit->input.use_mouse_pointer_for_paddle_1 && joystick_idx == 0))
    {
        //double sensitivity = 0.25 + 0.00075 * (1000.0 - double(settings.joystick_sensitivity)); // Inverse scale from 0.25..1.0
       double sensitivity = 0.25 + 0.00075 * (1000.0 - 500.0); // Inverse scale from 0.25..1.0

       /*Settings::Input::JoystickAxis joystick = HORIZONTAL ? settings.joy_x_axis : settings.joy_y_axis;
       double val = circuit->input.getJoystickAxis(joystick.joystick, joystick.axis) / (65536.0 * sensitivity) + 0.5; // 0..1 */
       unsigned axis_idx = HORIZONTAL ? 0 : 1;
       double controller_input;
       if (circuit->input.use_mouse_pointer_for_paddle_1 && joystick_idx == 0)
       {
         controller_input = circuit->input.getPointerAxis(axis_idx);
       } else {                                                                                     
         controller_input = circuit->input.getJoystickAxis(joystick_idx, axis_idx);
       }
       double val = controller_input / (65536.0 * sensitivity) + 0.5; // 0..1 */

        if(val < 0.0) val = 0.0;
        else if(val > 1.0) val = 1.0;
        
        if(desc->max_val > desc->min_val)
            desc->current_val = val * (desc->max_val - desc->min_val) + desc->min_val;
        else
            desc->current_val = (1.0 - val) * (desc->min_val - desc->max_val) + desc->max_val;
    }

    //if(desc->current_val != prev_val && desc->mono_555) // Update resistance value in 555
    {
        desc->mono_555->r = desc->current_val;
        
        //chip->deactivate_outputs(); // TODO: does this improve things?
        //chip->state = PASSIVE;
        //chip->active_outputs = (1 << chip->output_links.size()) - 1;
        
        chip->pending_event = chip->circuit->queue_push(chip, 0);
    }
     
}


// My sincerest apologies
/* template <typename C, const C& (Settings::*c)() const, KeyAssignment C::*k>
CUSTOM_LOGIC( digital_input )
{
    Circuit* circuit = chip->circuit;
    const KeyAssignment& key_assignment = (circuit->settings.*c)().*k;

    int new_out = circuit->input.getKeyPressed(key_assignment);
    new_out ^= 1; // Joysticks, buttons are active LOW

    if(new_out != chip->output)
    {
        // Generate output event
        chip->pending_event = chip->circuit->queue_push(chip, 0);
    }
} */


template <int controller, unsigned button>
CUSTOM_LOGIC( digital_input )
{
    Circuit* circuit = chip->circuit;
    //const KeyAssignment& key_assignment = (circuit->settings.*c)().*k;
    //int new_out = circuit->input.getKeyPressed(key_assignment);
   int new_out = circuit->input.getJoystickButton(controller, button);
   //int new_out = 0;
    new_out ^= 1; // Joysticks, buttons are active LOW

    if(new_out != chip->output)
    {
        // Generate output event
        chip->pending_event = chip->circuit->queue_push(chip, 0);
    }
}

template <int N> CHIP_LOGIC( button_inv )
{
    pin[i1 + N - 1] = pin[N] ^ 1;
}

CHIP_DESC( COIN_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Output
    ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_SELECT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

    ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_SELECT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

    ChipDesc(&digital_input<2, RETRO_DEVICE_ID_JOYPAD_SELECT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 3 ),

    ChipDesc(&digital_input<3, RETRO_DEVICE_ID_JOYPAD_SELECT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 4 ),

    ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_L>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 5 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),
    CHIP_START(button_inv<3>) INPUT_PINS( 3 ) OUTPUT_PIN( i3 ),
    CHIP_START(button_inv<4>) INPUT_PINS( 4 ) OUTPUT_PIN( i4 ),
    CHIP_START(button_inv<5>) INPUT_PINS( 5 ) OUTPUT_PIN( i5 ),

	CHIP_DESC_END
};

CHIP_DESC( START_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_START>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

    ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_START>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),
 
	CHIP_DESC_END
};

CHIP_DESC( JOYSTICK1_INPUT ) = 
{
   CUSTOM_CHIP_START(&clock)
   OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
   OUTPUT_PIN( i7 ),
   
   // Normally Open (Active Low) Outputs
   ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_UP>)
   INPUT_PINS( i7 )
   OUTPUT_PIN( Joystick::UP ),
   
   ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_DOWN>)
   INPUT_PINS( i7 )
   OUTPUT_PIN( Joystick::DOWN ),
   
   ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_LEFT>)
   INPUT_PINS( i7 )
   OUTPUT_PIN( Joystick::LEFT ),
   
   ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_RIGHT>)
   INPUT_PINS( i7 )
   OUTPUT_PIN( Joystick::RIGHT ),
   
   CHIP_DESC_END
};

CHIP_DESC( JOYSTICK2_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_UP>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( Joystick::UP ),

	ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_DOWN>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( Joystick::DOWN ),

	ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_LEFT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( Joystick::LEFT ),

	ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_RIGHT>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( Joystick::RIGHT ),

	CHIP_DESC_END
};

CHIP_DESC( BUTTONS1_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

	ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_B>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

	ChipDesc(&digital_input<0, RETRO_DEVICE_ID_JOYPAD_Y>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 3 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),
    CHIP_START(button_inv<3>) INPUT_PINS( 3 ) OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};


CHIP_DESC( BUTTONS2_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

	ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_B>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

	ChipDesc(&digital_input<1, RETRO_DEVICE_ID_JOYPAD_Y>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 3 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),
    CHIP_START(button_inv<3>) INPUT_PINS( 3 ) OUTPUT_PIN( i3 ),

	CHIP_DESC_END 
};

CHIP_DESC( BUTTONS3_INPUT ) = 
{
	 CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<2, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

	ChipDesc(&digital_input<2, RETRO_DEVICE_ID_JOYPAD_B>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),

	CHIP_DESC_END
};

CHIP_DESC( BUTTONS4_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<3, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

	ChipDesc(&digital_input<3, RETRO_DEVICE_ID_JOYPAD_B>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 2 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),
    CHIP_START(button_inv<2>) INPUT_PINS( 2 ) OUTPUT_PIN( i2 ),

	CHIP_DESC_END
};


CHIP_DESC( BUTTONS5_INPUT ) = 
{
	 CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<4, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),

	CHIP_DESC_END
};



CHIP_DESC( BUTTONS6_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i7 ),

    // Normally Open (Active Low) Outputs
    ChipDesc(&digital_input<5, RETRO_DEVICE_ID_JOYPAD_A>)
        INPUT_PINS( i7 )
        OUTPUT_PIN( 1 ),

    // Normally Closed (Active High) Outputs
    CHIP_START(button_inv<1>) INPUT_PINS( 1 ) OUTPUT_PIN( i1 ),

	CHIP_DESC_END
};



template <unsigned WHEEL>
void wheel_input(Chip* chip, int mask)
{
    Circuit* circuit = chip->circuit;
    const Settings::Input::Wheel& settings = circuit->settings.input.wheel[WHEEL];

    WheelDesc<WHEEL>* wheel = (WheelDesc<WHEEL>*)chip->custom_data;
    
    static const double MAX_ANGLE = 15.0;

    double delta = 0.0;
   unsigned joystick_idx = WHEEL;
   unsigned axis_idx = 0; // X-axis

#ifdef MANYMOUSE
   bool settings_use_mouse = true;  // TODO (mittonk): Core setting
   int settings_mouse_sensitivity = 500;  // TODO (mittonk): Core setting
   int settings_wheel_axis_mouse = WHEEL;  // TODO (mittonk): Pick controller.
    if(settings_use_mouse)
    {
        double sensitivity = double(settings_mouse_sensitivity) / 1000.0;

        if(settings.axis.axis == 0) // Using mouse x-axis
            delta += circuit->input.getManymouseRelativeMouseX(settings.axis.mouse) * sensitivity;
        else // Using mouse y-axis
            delta += circuit->input.getManymouseRelativeMouseY(settings.axis.mouse) * sensitivity;
    }
#endif
    
    if (true) // if(settings.use_keyboard)
    {
       double sensitivity;
       
       double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1000000000.0;
       sensitivity = double(circuit->input.wheel_keyjoy_sensitivity) / 1000.0;

      /* switch(settings.left.type)
       {
           case KeyAssignment::KEYBOARD:
               delta -= circuit->input.getKeyboardState(settings.left.button) * dt * sensitivity;
               break;
           case KeyAssignment::JOYSTICK_BUTTON: */
      delta -= circuit->input.getJoystickButton(joystick_idx, RETRO_DEVICE_ID_JOYPAD_LEFT) * dt * sensitivity;
      // Right
     delta += circuit->input.getJoystickButton(joystick_idx, RETRO_DEVICE_ID_JOYPAD_RIGHT) * dt * sensitivity;


       
       
       
       //double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1000000000.0;
        //double sensitivity = double(settings.keyboard_sensitivity) / 1000.0;
        sensitivity = double(circuit->input.wheel_keyjoy_sensitivity) / 1000.0;

       
       
        /* switch(settings.left.type)
        {
            case KeyAssignment::KEYBOARD:
                delta -= circuit->input.getKeyboardState(settings.left.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON:
                delta -= circuit->input.getJoystickButton(settings.left.joystick, settings.left.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_AXIS:
            { */

                //double val = circuit->input.getJoystickAxis(settings.left.joystick, settings.left.button >> 1) / 32768.0;

       double val = circuit->input.getJoystickAxis(joystick_idx, axis_idx) / 32768.0;

                //if(val > ANALOG_THRESHOLD ) //&& (settings.left.button & 1))
                 //   delta -= (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                //else
               if(val < -ANALOG_THRESHOLD) // && !(settings.left.button & 1))
                    delta += (val + ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
                /* break;
            }
            default: break;
        }
        switch(settings.right.type)
        {
            case KeyAssignment::KEYBOARD:
                delta += circuit->input.getKeyboardState(settings.right.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_BUTTON:
                delta += circuit->input.getJoystickButton(settings.right.joystick, settings.right.button) * dt * sensitivity;
                break;
            case KeyAssignment::JOYSTICK_AXIS:
            {
                double val = circuit->input.getJoystickAxis(settings.right.joystick, settings.right.button >> 1) / 32768.0;
                 */
                if(val > ANALOG_THRESHOLD )//&& (settings.right.button & 1))
                    delta += (val - ANALOG_THRESHOLD) * ANALOG_SCALE * dt * sensitivity;
       /*
                else if(val < -ANALOG_THRESHOLD && !(settings.right.button & 1))
                    delta -= (val + ANALOG_THRESHOLD) * dt * sensitivity;
                break;
            }
            default: break; */
       // }
    }
        
    if(delta > MAX_ANGLE)       delta = MAX_ANGLE;
    else if(delta < -MAX_ANGLE) delta = -MAX_ANGLE;

    delta /= -10.0;

    for(int i = 0; i < 10; i++)
    {
        wheel->angle = fmod(wheel->angle + delta, 360.0);
        if(wheel->angle < 0.0) wheel->angle += 360.0;

        wheel->wheel_events[0].push_back(wheel->angle);
        wheel->wheel_events[1].push_back(wheel->angle);
    }
}

template <unsigned WHEEL, Wheel::OUTPUT output>
void wheel_event_gen(Chip* chip, int mask)
{
    WheelDesc<WHEEL>* wheel = (WheelDesc<WHEEL>*)chip->custom_data;
    cirque<double>& wheel_events = wheel->wheel_events[output-1];
    
    static const double ENCODER_ANGLE = 5.0;

    if(wheel_events.empty()) return;

    double angle = wheel_events.front();
    wheel_events.pop_front();

    int new_out;

    if(output == Wheel::A)
    {
        new_out = fmod(angle, ENCODER_ANGLE) < ENCODER_ANGLE*0.5 ? 0 : 1;
    }
    else
    {
        double g = fmod(angle, ENCODER_ANGLE);
        new_out = (g <  ENCODER_ANGLE*0.25 || g >= ENCODER_ANGLE*0.75) ? 0 : 1;
    }
    
    if(new_out != chip->output)
        chip->pending_event = chip->circuit->queue_push(chip, 0);
     
}

CHIP_DESC( WHEEL1_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),

	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE / 10.0, INPUT_POLL_RATE / 10.0 )
        OUTPUT_PIN( i2 ),

    ChipDesc(&wheel_input<0>)
        INPUT_PINS( i1 ),

    ChipDesc(&wheel_event_gen<0, Wheel::A>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::A ),

    ChipDesc(&wheel_event_gen<0, Wheel::B>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::B ),

	CHIP_DESC_END
};

CHIP_DESC( WHEEL2_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE / 10.0, INPUT_POLL_RATE / 10.0 )
        OUTPUT_PIN( i2 ),

    ChipDesc(&wheel_input<1>)
        INPUT_PINS( i1 ),

    ChipDesc(&wheel_event_gen<1, Wheel::A>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::A ),

    ChipDesc(&wheel_event_gen<1, Wheel::B>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::B ),

	CHIP_DESC_END
};

CHIP_DESC( WHEEL3_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE / 10.0, INPUT_POLL_RATE / 10.0 )
        OUTPUT_PIN( i2 ),

    ChipDesc(&wheel_input<2>)
        INPUT_PINS( i1 ),

    ChipDesc(&wheel_event_gen<2, Wheel::A>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::A ),

    ChipDesc(&wheel_event_gen<2, Wheel::B>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::B ),

	CHIP_DESC_END
};

CHIP_DESC( WHEEL4_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE / 10.0, INPUT_POLL_RATE / 10.0 )
        OUTPUT_PIN( i2 ),

    ChipDesc(&wheel_input<3>)
        INPUT_PINS( i1 ),

    ChipDesc(&wheel_event_gen<3, Wheel::A>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::A ),

    ChipDesc(&wheel_event_gen<3, Wheel::B>)
        INPUT_PINS( i2 ) OUTPUT_PIN( Wheel::B ),

	CHIP_DESC_END
};


template <unsigned THROTTLE>
void ThrottleDesc<THROTTLE>::throttle_input(Chip* chip, int mask)
{
    Circuit* circuit = chip->circuit;
    //const Settings::Input::Throttle& settings = circuit->settings.input.throttle[THROTTLE];

    ThrottleDesc<THROTTLE>* desc = (ThrottleDesc<THROTTLE>*)chip->custom_data;
    
    double dt = (INPUT_POLL_RATE / Circuit::timescale) / 1.0e12;
    double* pos = desc->pos;

    /*switch(settings.key.type)
    {
        case KeyAssignment::KEYBOARD:
            if(circuit->input.getKeyboardState(settings.key.button))
                *pos += dt * double(settings.keyboard_sensitivity);
            else
                *pos -= dt * double(settings.keyboard_sensitivity);
            break;
        case KeyAssignment::JOYSTICK_BUTTON:
            if(circuit->input.getJoystickButton(settings.key.joystick, settings.key.button))
     */
            if(circuit->input.getJoystickButton(THROTTLE, RETRO_DEVICE_ID_JOYPAD_UP))
                *pos += dt * double(circuit->input.throttle_keyjoy_sensitivity);
            else
                *pos -= dt * double(circuit->input.throttle_keyjoy_sensitivity);
       /*     break;
        case KeyAssignment::JOYSTICK_AXIS:
            if(settings.key.button & 1)
                *pos = circuit->input.getJoystickAxis(settings.key.joystick, settings.key.button >> 1) / 327.68;
            else
                *pos = circuit->input.getJoystickAxis(settings.key.joystick, settings.key.button >> 1) / -327.68;
            break;
    } */

    if(*pos < 0.0) *pos = 0.0;
    else if(*pos > 100.0) *pos = 100.0;

    chip->deactivate_outputs(); // TODO: does this improve things?
    //chip->state = PASSIVE;
    //chip->active_outputs = (1 << chip->output_links.size()) - 1;
        
    chip->pending_event = chip->circuit->queue_push(chip, 0);
     
}

CHIP_DESC( THROTTLE1_INPUT ) = 
{
	CUSTOM_CHIP_START(&clock)
        OUTPUT_DELAY_S( INPUT_POLL_RATE, INPUT_POLL_RATE )
        OUTPUT_PIN( i1 ),
    
    ChipDesc(&ThrottleDesc<0>::throttle_input)
        INPUT_PINS( i1 )
        OUTPUT_PIN( i3 ),

	CHIP_DESC_END
};






Input::Input()
{ 
    /* joysticks.resize(SDL_NumJoysticks());

    for(int i = 0; i < joysticks.size(); i++)
        joysticks[i] = SDL_JoystickOpen(i);
        // TODO: check if joystick failed to open
     */
   paddle_keyboard_sensitivity = 250;
   paddle_joystick_sensitivity = 500;
   wheel_keyjoy_sensitivity = 500;
   throttle_keyjoy_sensitivity = 250;
   use_mouse_pointer_for_paddle_1 = false;
}

Input::~Input()
{
    /* for(int i = 0; i < joysticks.size(); i++)
        if(joysticks[i]) SDL_JoystickClose(joysticks[i]);
     */
}

void Input::poll_input()
{
    //SDL_JoystickUpdate();

    //Application::processEvents();
#ifdef MANYMOUSE
    ManyMouseEvent mouse_event;
    while (ManyMouse_PollEvent(&mouse_event))
    {
        int mouse = mouse_event.device;
        
        if(mouse >= mouse_rel_x.size())
        {
            mouse_rel_x.resize(mouse+1);
            mouse_rel_y.resize(mouse+1);
        }

        if (mouse_event.type == MANYMOUSE_EVENT_RELMOTION)
        {
            if(mouse_event.item == 0)
                mouse_rel_x[mouse] += mouse_event.value;
            else if (mouse_event.item == 1)
                mouse_rel_y[mouse] += mouse_event.value;
        }
        else if (mouse_event.type == MANYMOUSE_EVENT_ABSMOTION)
        {
            // TODO: Handle absolute motion?
            /*double val = (double) (mouse_event.value - mouse_event.minval);
            double maxval = (double) (mouse_event.maxval - mouse_event.minval);
            if (mouse_event.item == 0)
                mouse->x = (val / maxval);
            else if (mouse_event.item == 1)
                mouse->y = (val / maxval);*/
        }
    }
#endif
}

int Input::getRetroRelativeMouseX(unsigned mouse)
{
    return input_mouse_x[mouse];
}

int Input::getRetroRelativeMouseY(unsigned mouse)
{
    return input_mouse_y[mouse];
}

#ifdef MANYMOUSE
int Input::getManymouseRelativeMouseX(unsigned mouse)
{
   if(mouse >= mouse_rel_x.size())
    {
        mouse_rel_x.resize(mouse+1);
        mouse_rel_y.resize(mouse+1);
    }

    int x = mouse_rel_x[mouse];
    mouse_rel_x[mouse] = 0;
    return x;
}

int Input::getManymouseRelativeMouseY(unsigned mouse)
{
   if(mouse >= mouse_rel_y.size())
   {
      mouse_rel_x.resize(mouse+1);
      mouse_rel_y.resize(mouse+1);
   }
   
   int y = mouse_rel_y[mouse];
   mouse_rel_y[mouse] = 0;
   return y;
}
#endif

bool Input::getKeyboardState(unsigned scancode)
{
    //return Keyboard::pressed((Keyboard::Scancode)scancode);
    return false;
}

bool Input::getJoystickButton(unsigned joystick, unsigned button)
{
   // Button is RETRO_DEVICE_ID_JOYPAD_A or similar.
   // RetroPad d-pad is implemented as 4 buttons.
   unsigned bitmask = 1<<button;
   return bool(input_state[joystick] & bitmask);

   //if(joystick >= joysticks.size()) return 0;
    //return SDL_JoystickGetButton(joysticks[joystick], button);
}

int16_t Input::getJoystickAxis(unsigned joystick, unsigned axis)
{
   if (axis == 0) {
      return int16_t(float(input_analog_left_x[joystick]));
   } else {
      return int16_t(float(input_analog_left_y[joystick]));
   }
}

int16_t Input::getPointerAxis(unsigned axis)
{
   if (axis == 0) {
      return int16_t(float(input_pointer_x[0]));
   } else {
      return int16_t(float(input_pointer_y[0]));
   }
}

int Input::getNumJoysticks()
{
    //return joysticks.size();
}

int Input::getNumJoystickAxes(int joystick)
{
    //return SDL_JoystickNumAxes(joysticks[joystick]);
}

bool Input::getKeyPressed(const KeyAssignment& key_assignment)
{
    switch(key_assignment.type)
    {
        case KeyAssignment::KEYBOARD:
            return getKeyboardState(key_assignment.button);
        case KeyAssignment::JOYSTICK_BUTTON:
            return getJoystickButton(key_assignment.joystick, key_assignment.button);
        case KeyAssignment::JOYSTICK_AXIS:
        {
            int16_t val = getJoystickAxis(key_assignment.joystick, key_assignment.button >> 1);
            return (key_assignment.button & 1) ? (val > Joystick::BUTTON_THRESHOLD) : (val < -Joystick::BUTTON_THRESHOLD);
        }
        default: return false;
    }
}
