
#ifndef _Controls_H_
#define _Controls_H_

#include <GrafxT3.h>
#include "Variables.h"
#include "Player.h"
#include "World.h"

//void newcontrols(){
/*
   if(tft.buttons.repeat(BTN_UP,1)){
      tft.writeRectNBPP(player.player_x, player.player_y,  16, 16, 4, paulrearwa, palette);
      tft.writeRectNBPP(player.player_x, player.player_y, 16, 16, 4, paulrearwb, palette);
      
    player.player_direction = 1;
     player.player_y -= 4;
     if(checkcolision())
    {
        player.player_y += 4;} 
    }
     if(player.player_y <= 16){
        player.player_y = 16;}  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   if(tft.buttons.repeat(BTN_DOWN,1)){
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       
  if(tft.buttons.repeat(BTN_LEFT,1)){
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////         
if(tft.buttons.repeat(BTN_RIGHT,1)){
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
*/
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
#endif
























