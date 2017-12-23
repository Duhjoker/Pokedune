/*This is the Main function file for the GameR-Iot Multiple MCU Arduino driven 
 * game system and DIY console. This is a demo game RPG set in the Dune Universe
 * created by Frank Herbert.
 */
#include <GrafxT3.h>
#include <SPIN.h>
#include <SPI.h>
#include <Bounce.h>
#include <EEPROM.h>
#include "Variables.h"
#include "Player.h"
#include "World.h"
#include "Monsters.h"
#include "Battle.h"
#include "Menu.h"
#include "Controls.h"

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#define TFT_DC  9
#define TFT_CS 10
#define TFT_RST 7
#define TFT_SCK 13
#define TFT_MISO 39
#define TFT_MOSI 11
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
uint8_t use_fb = 1;
uint8_t use_clip_rect = 0;
uint8_t use_set_origin = 0;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
byte buttons = 0;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
GrafxT3 tft = GrafxT3(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCK, TFT_MISO, &SPIN);
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////Set-up//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

void setup() {
  while (!Serial && (millis() < 4000)) ;
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(BLACK);
  //tft.setFrameRate(60);
  tft.persistence = false;

   SPI.setMISO(39);
     tft.useFrameBuffer(use_fb);
 
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////Loop////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void loop(void) {
   tft.updateAll();
   if(state == STATE_Menu){
    Menu(); 
             state = STATE_Menu;
             nextState = STATE_Player; 
    }
else if(state == STATE_Player){ 
 drawplayer();
              state = STATE_Player;
              nextState = STATE_Menu;   
    }
//else if(state == STATE_Battle){ 
// drawbattle(player.player_x,player.player_y);
 
//              state = STATE_Battle;
//              nextState = STATE_Menu;
//    }
if(nextState != state) state = nextState;
   tft.updateScreen();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////PROGRESS//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------
byte saveKey = 121;

void save()
{
  EEPROM.put(0, saveKey);
  EEPROM.put(1, player);
}

bool checkLoad()
{
  byte nr;
  EEPROM.get(0, nr);
  
  return (nr == saveKey);
}

void load()
{
    EEPROM.get(1, player);
}

//------------------------
// INPUT
//------------------------
bool getButtonDown(byte button)
{
  if(tft.Bpressed(button))
  {
    if(buttons & button) return false;
    else buttons |= button;
    return true;
  }
  else
  {
    if(buttons & button) buttons ^= button;
    return false;
  }
}

