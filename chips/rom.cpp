/*#include <nall/platform.hpp>
#include <nall/unzip.hpp>
#include <phoenix.hpp>
*/
#include "rom.h"
#include "../unzip/unzip.h"
#include "../unzip/fileio.h"
#include "../libretro.h"
#include <cstdint>
#include <vector>
/*
   using namespace nall;
   using namespace phoenix;
   */
#include <string>
using std::string;
using std::vector;
// in main.cpp
//extern const string& application_path();
//extern Window& application_window();
// In libretro.cpp
extern retro_log_printf_t log_cb;
extern retro_environment_t environ_cb;


static string filename;
static string romname;
static string libretro_zip_filename;

//static unzip zip_file;
static vector<uint8_t> rom_data;
static char temp_rom_name[1000];

static bool error_shown = false;


#ifndef PATH_MAX
#define PATH_MAX    1024
#endif

uint8_t RomDesc::get_data(const RomDesc* rom, unsigned offset)
{
   char name[PATH_MAX];
   uint8_t *buffer = nullptr;

   int32_t zerror = UNZ_OK;
   unzFile zhandle;
   unz_file_info zinfo;

   zinfo.uncompressed_size = 0;

   uint32_t filesize = 0;

   //std::vector<uint8_t> rom_data;


   //   if(filename != rom->file_name.c_str())
   if((filename != rom->file_name.c_str()) || (romname != rom->rom_name.c_str()))

   {
      filename = rom->file_name.c_str();
      error_shown = false;

      // if(zip_file.open({application_path(), "roms/", filename, ".zip"}) == false &&
      //           zip_file.open({application_path(), "../../roms/", filename, ".zip"}) == false)
      const char * archive = libretro_zip_filename.c_str();
      zhandle = unzOpen(archive); // archive
      if(!zhandle)
      {
         /*MessageWindow({"ROM File roms/", filename, ".zip not found.\n"
           "Game will not function correctly!"})
           .setParent(application_window())
           .setTitle("Error")
           .error();
           */
         struct retro_message message;
         message.msg = "ROM file not found or damaged.  Game will not function correctly!";
         message.frames = 60;
         environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &message);

         log_cb(RETRO_LOG_ERROR, "ROM file %s not found.  Game will not function correctly!", libretro_zip_filename.c_str());
         romname = rom->rom_name.c_str();
         error_shown = true;
         return 0xff;
      }
   }

   if(romname != rom->rom_name.c_str())
   {
      romname = rom->rom_name.c_str();

      //rom_data.reset();
      rom_data.clear();

      // Check for rom with correct CRC
      zerror = unzGoToFirstFile(zhandle);
      if(zerror != UNZ_OK)
      {
         unzClose(zhandle);
         log_cb(RETRO_LOG_ERROR, "Cannot go to first file\n");
         return 0xff;
      }
      /* Get information about the file */
      unzGetCurrentFileInfo(zhandle, &zinfo, &name[0], 0xff, NULL, 0, NULL, 0);

      /*for(unzip::File& f : zip_file.file)
        if(f.crc32 == rom->crc || f.crc32 == rom->alt_crc)
        {
        rom_data = zip_file.extract(f);
        break;
        }
        */

      while (!((zinfo.crc == rom->crc) || (zinfo.crc == rom->alt_crc)))
      {
         unzGoToNextFile(zhandle);
         unzGetCurrentFileInfo(zhandle, &zinfo, &name[0], 0xff, NULL, 0, NULL, 0);
         // TODO : No files match?
      }
      //rom_data = zip_file.extract(f);
      filesize = zinfo.uncompressed_size;

      /* Open current file */
      zerror = unzOpenCurrentFile(zhandle);
      if(zerror != UNZ_OK)
      {
         unzClose(zhandle);
         return 0xff;
      }

      /* Allocate buffer and read in file */
      buffer = (uint8_t*)malloc(filesize);
      if(!buffer) return 0xff;
      zerror = unzReadCurrentFile(zhandle, buffer, filesize);

      /* Internal error: free buffer and close file */
      if(zerror < 0 || zerror != (int32_t)filesize)
      {
         free(buffer);
         buffer = NULL;
         unzCloseCurrentFile(zhandle);
         unzClose(zhandle);
         return 0xff;
      }
      //std::vector<uint8_t> rom_data(&buffer[0], &buffer[filesize]);
      for (int i = 0; i<filesize; i++)
      {
         rom_data.push_back(buffer[i]);
      }

      /* Close current file and archive file */
      unzCloseCurrentFile(zhandle);
      unzClose(zhandle);
      zhandle = nullptr;
      //memcpy(filename, name, PATH_MAX);

      //*filesize = zinfo.uncompressed_size;

      //if(rom_data.size() == 0) // ROM w/ correct CRC not found, check for ROM with correct name
      /*
         if(*filesize == 0) // ROM w/ correct CRC not found, check for ROM with correct name
         {
         for(unzip::File& f : zip_file.file)
         if(f.name == romname)
         {
         rom_data = zip_file.extract(f); */
      /*
         MessageWindow({"ROM ", romname, " incorrect CRC.\n"
         "Expected: ", hex(rom->crc), " Found: ", hex(f.crc32),
         "\nGame may not function correctly."})
         .setParent(application_window())
         .setTitle("Warning")
         .warning(); */
      /* 

         break;
         }
         }

         if(rom_data.size() == 0 && !error_shown)
         { */
      /*MessageWindow({"ROM ", romname, " with CRC ", hex(rom->crc), " not found.\n"
        "Game will not function correctly!"})
        .setParent(application_window())
        .setTitle("Error")
        .error();
        */
      /*  

          error_shown = true;
          } */
   }
   /*
      if((filename != rom->file_name.c_str()) ||(romname != rom->rom_name.c_str()))
      {
      rom_data.clear();

      uint8_t *rom_data_raw;
      uint32_t rom_data_raw_size = 0;

      size_t bytes_copied = rom->rom_name.copy(temp_rom_name, rom->rom_name.length(), 0);

      rom_data_raw = loadFromZipByName((char*)libretro_zip_filename.c_str(), temp_rom_name, &rom_data_raw_size);
   //if (!rom_data)
   // return 0;
   //      rom_data = std::vector<uint8_t>(&rom_data_raw[0], &rom_data_raw[rom_data_raw_size]);
   std::vector<uint8_t> rom_data(&rom_data_raw[0], &rom_data_raw[rom_data_raw_size]);
   filename = rom->file_name.c_str();
   romname = rom->rom_name.c_str();
   }
   */

   if(offset < rom_data.size()) {
      return rom_data[offset];
   }

   return 0xff;
}

void RomDesc::set_zip_filename(const char *filename)
{
   libretro_zip_filename = filename;
}
