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
#include "Menu.h"


#define STATE_Player 1
#define STATE_Menu 0
////#define STATE_Transition 3

byte state = STATE_Menu;
byte nextState = STATE_Player;
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
   pinMode(buttonUp, INPUT_PULLUP);
   pinMode(buttonDown, INPUT_PULLUP);
   pinMode(buttonLeft, INPUT_PULLUP);
   pinMode(buttonRight, INPUT_PULLUP);
   pinMode(buttonS, INPUT_PULLUP);
   pinMode(buttonX, INPUT_PULLUP);
   pinMode(buttonY, INPUT_PULLUP);
   pinMode(buttonA, INPUT);
   pinMode(buttonB, INPUT_PULLUP);
   pinMode(buttonT, INPUT_PULLUP); 
   SPI.setMISO(39);
     tft.useFrameBuffer(use_fb);
 
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////Loop////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void loop(void) {

if(state == STATE_Menu){
 if (ButtonA.fallingEdge()){  
Menu();
controls();}
   state = STATE_Menu;
        nextState = STATE_Player;
}
else if(state == STATE_Player){
 drawplayer();
 controls();
     state = STATE_Player;
      nextState = STATE_Menu;   
 }

 if(nextState != state) state = nextState;
  

  tft.updateScreen();
 
 }

 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////controls//////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void controls(){
  //////////////////////////////////////////////////////////////////////////////
///////////////////////////////Palette////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 palette[0] = 0;
       palette[1] = BLACK;
             palette[2] = BLUE;
                   palette[3] = BROWN;
                         palette[4] = DARKGREEN;
                              palette[5] = GREY;
                                    palette[6] = PINK;
                                          palette[7] = RED;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////                                                
                                           palette[8] = BEIGE;
                                     palette[9] = GREEN;
                               palette[a]= DARKGREY;
                         palette[b] = LIGHTGREY;
                   palette[c] = YELLOW; 
             palette[d] = PURPLE; 
       palette[e] = WHITE;
 palette[f] = ORANGE;
///////////////////////////////////////////////////////////////////////////////
///////////////////////////Buttons Repeat//////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////  
       if (ButtonUp.update());
               if (ButtonDown.update());
                       if (ButtonLeft.update());
                             if (ButtonRight.update());
                                       if (ButtonA.update());
                                              if (ButtonB.update());
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
                                              ButtonUp.rebounce(10);
                                     ButtonDown.rebounce(10);
                              ButtonLeft.rebounce(10);
                      ButtonRight.rebounce(10);
               ButtonA.rebounce(10);
          ButtonB.rebounce(10);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
if(state == STATE_Player){

///////////////////////////////////////////////////////////////////////////////
////////////////////////////Up/////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
if (ButtonUp.fallingEdge()){
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrearwa,palette);
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrearwb,palette);
    player.player_direction = 1;
    player.player_y -= 4;
    if(checkcolision())
    {
        player.player_y += 4;} 
    }
     if(player.player_y <= 16){
        player.player_y = 16;}  

//////////////////////////////////////////////////////////////////////////////
///////////////////////////////Down///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
if (ButtonDown.fallingEdge()){
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulfrontwa,palette);
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulfrontwb,palette);
    player.player_direction = 2;
    player.player_y += 4;
    if(checkcolision())
    {
       player.player_y -=4;}
    }
    if(player.player_y >= 224){
       player.player_y = 224;}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////Left////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
if (ButtonLeft.fallingEdge()){
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulleftw,palette);
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulleft,palette);
    player.player_direction = 3;
    player.player_x -= 4;
    if(checkcolision())
   {
      player.player_x += 4;}  
   }
   if(player.player_x >= 304){
      player.player_x = 304;}    
/////////////////////////////////////////////////////////////////////////////
////////////////////////////Right////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
if (ButtonRight.fallingEdge()){
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrightw,palette);
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulright,palette);
    player.player_direction = 4;
    player.player_x += 4;
  if(checkcolision())
  {
    player.player_x -= 4;}
  }
            if(player.player_x <= 16){
              player.player_x = 16;}
///////////////////////////////////////////////////////////////////////////////     
//////////////////////////////PLAYER DIRECTION/////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
if (player.player_direction == 1){
  tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrear,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player.player_direction == 2){
   tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulfront,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player.player_direction == 3){
    tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulleft,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player.player_direction == 4){
     tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulright,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////        
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////for use with movey blocks////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player.player_direction == 5){
     tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrearwa,palette);
}     
else if (player.player_direction == 6){
     tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulfrontwa,palette);
}     
else if (player.player_direction == 7){
     tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulleftw,palette);
}          
else if (player.player_direction == 8){
     tft.writeRectNBPP(player.player_x, player.player_y,16,16,4,paulrightw,palette); 
     }          
 }
///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////// 
else if(state == STATE_Menu){

if (ButtonUp.fallingEdge()){
     tft.writeRectNBPP(cursor_x,cursor_y,16,16,4,cursordot2,palette);
     cursor_y -= 40;
//     if(checkcolision())
     {
      cursor_y += 40;} 
     }
     if(cursor_y <= 32){
        cursor_y = 32;}
          
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////Down///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 if (ButtonDown.fallingEdge()){
   tft.writeRectNBPP(cursor_x, cursor_y,16,16,4,cursordot2,palette);
   cursor_y += 40;
//    if(checkcolision())
    {
    cursor_y -= 40;}
    }
    if(cursor_y >= 224){
       cursor_y = 224;}
   }
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









  