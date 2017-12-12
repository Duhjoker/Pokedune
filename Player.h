#ifndef _Player_H_
#define _Player_H_

#include "world.h"
#include "Variables.h"
#include "Menu.h"
#include "Puzzle.h"
#include "Controls.h"

bool checkcolision(void);
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////Loop////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void drawplayer() {
///////////////////////////////////////////////////////////////////////////////
////////////////////////////////camera controls////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// Clamp cameraX
if(cameraX < cameraXMin)
{
  cameraX = cameraXMin;
}
else if(cameraX > cameraXMax)
{
   cameraX = cameraXMax;
}

// Clamp cameraY
if(cameraY < cameraYMin)
{
  cameraY = cameraYMin;
}
else if(cameraY > cameraYMax)
{
   cameraY = cameraYMax;  
}

// Check if player is beyond X boundary
if(player_x < playerXMin)
{
  cameraX += cameraXSpeed;
  if(cameraX > cameraXMin && cameraX < cameraXMax)
  {
    player_x = playerXMin;
  }
}
else if(player_x > playerXMax)
{
  cameraX -= cameraXSpeed;
  if(cameraX > cameraXMin && cameraX < cameraXMax)
  {
    player_x = playerXMax;
  }
}

// Check if player is beyond Y boundary
if(player_y < playerYMin)
{
  cameraY += cameraYSpeed;
  if(cameraY > cameraYMin && cameraY < cameraYMax)
  {
    player_y = playerYMin;
  }
}
else if(player_y > playerYMax)
{
  cameraY -= cameraYSpeed;
  if(cameraY > cameraYMin && cameraY < cameraYMax)
  {
    player_y = playerYMax;
  }
}
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
///////////////////////////////Tilemap/////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
/////// top center rock formation
        
        if(room == 1){
  tft.drawTilemap(cameraX, cameraY, imperialbasin, spritesheet, palette);}
   else if(room == 2){
  tft.drawTilemap(cameraX, cameraY, dungeon1, spritesheet, palette);}
   else if(room == 3){
  tft.drawTilemap(cameraX, cameraY, arakeen, spritesheet, palette);}
   else if(room == 4){
  tft.drawTilemap(cameraX, cameraY, arakeen1l1, spritesheet, palette);}
   else if(room == 5){
  tft.drawTilemap(cameraX, cameraY, arakeen1l2, spritesheet, palette);}
   else if(room == 6){
  tft.drawTilemap(cameraX, cameraY, arakeen2l1, spritesheet, palette);}
   else if(room == 7){
  tft.drawTilemap(cameraX, cameraY, arakeen2l2, spritesheet, palette);}
   else if(room == 8){
  tft.drawTilemap(cameraX, cameraY, arakeen2l3, spritesheet, palette);}
   else if(room == 9){
  tft.drawTilemap(cameraX, cameraY, arakeen3, spritesheet, palette);}
   else if(room == 10){
  tft.drawTilemap(cameraX, cameraY, arakeen4l1, spritesheet, palette);}
   else if(room == 11){
  tft.drawTilemap(cameraX, cameraY, arakeen4l2, spritesheet, palette);}
   else if(room == 12){
  tft.drawTilemap(cameraX, cameraY, arakeen4l3, spritesheet, palette);}
   else if(room == 13){
  tft.drawTilemap(cameraX, cameraY, arakeen5l1, spritesheet, palette);}
   else if(room == 14){
  tft.drawTilemap(cameraX, cameraY, arakeen5b1, spritesheet, palette);}
   else if(room == 15){
  tft.drawTilemap(cameraX, cameraY, arakeen5b2, spritesheet, palette);}
   else if(room == 16){
  tft.drawTilemap(cameraX, cameraY, arakeen5l2, spritesheet, palette);}
   else if(room == 17){
  tft.drawTilemap(cameraX, cameraY, arakeen5l3, spritesheet, palette);}
   else if(room == 18){
  tft.drawTilemap(cameraX, cameraY, arakeen6l1, spritesheet, palette);}
   else if(room == 19){
  tft.drawTilemap(cameraX, cameraY, arakeen6l2, spritesheet, palette);}
   else if(room == 20){
  tft.drawTilemap(cameraX, cameraY, arakeen7, spritesheet, palette);}
   else if(room == 21){
  tft.drawTilemap(cameraX, cameraY, arakeen8, spritesheet, palette);}
   else if(room == 22){
  tft.drawTilemap(cameraX, cameraY, arakeen9, spritesheet, palette);}
   else if(room == 23){
  tft.drawTilemap(cameraX, cameraY, arakeen10, spritesheet, palette);}
   else if(room == 24){
  tft.drawTilemap(cameraX, cameraY, dungeon2, spritesheet, palette);}
   else if(room == 25){
  tft.drawTilemap(cameraX, cameraY, village2, spritesheet, palette);}
   else if(room == 26){
  tft.drawTilemap(cameraX, cameraY, village2r1, spritesheet, palette);}
   else if(room == 27){
  tft.drawTilemap(cameraX, cameraY, village2r2, spritesheet, palette);}
   else if(room == 28){
  tft.drawTilemap(cameraX, cameraY, village2r3, spritesheet, palette);}
   else if(room == 29){
  tft.drawTilemap(cameraX, cameraY, village2r4, spritesheet, palette);}
   else if(room == 30){
  tft.drawTilemap(cameraX, cameraY, village2r5, spritesheet, palette);}
   else if(room == 31){
  tft.drawTilemap(cameraX, cameraY, village2r6, spritesheet, palette);}
   else if(room == 32){
  tft.drawTilemap(cameraX, cameraY, village2r7, spritesheet, palette);}
   else if(room == 33){
  tft.drawTilemap(cameraX, cameraY, village2r8l1, spritesheet, palette);}
   else if(room == 34){
  tft.drawTilemap(cameraX, cameraY, village2r8l2, spritesheet, palette);}
   else if(room == 35){
  tft.drawTilemap(cameraX, cameraY, dungeon3, spritesheet, palette);}
   else if(room == 36){
  tft.drawTilemap(cameraX, cameraY, village3, spritesheet, palette);}
   else if(room == 37){
  tft.drawTilemap(cameraX, cameraY, village3r1, spritesheet, palette);}
   else if(room == 38){
  tft.drawTilemap(cameraX, cameraY, village3r2, spritesheet, palette);}
   else if(room == 39){
  tft.drawTilemap(cameraX, cameraY, village3r3, spritesheet, palette);}
   else if(room == 40){
  tft.drawTilemap(cameraX, cameraY, village3r4, spritesheet, palette);}
   else if(room == 41){
  tft.drawTilemap(cameraX, cameraY, village3r5, spritesheet, palette);}
   else if(room == 42){
  tft.drawTilemap(cameraX, cameraY, village3r6l1, spritesheet, palette);}
   else if(room == 43){
  tft.drawTilemap(cameraX, cameraY, village3r6l2, spritesheet, palette);}
   else if(room == 44){
  tft.drawTilemap(cameraX, cameraY, dungeon4, spritesheet, palette);}
   else if(room == 45){
  tft.drawTilemap(cameraX, cameraY, desertp1, spritesheet, palette);}
}
/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////collision/////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
bool checkcolision(void) // Transformed it into a function 
{
  for(uint16_t i=0; i < tft.numcolision + 1; i++)
  {
    if(tft.collideRectRect(player_x, player_y,16,16,tft.solid[i].x,tft.solid[i].y,16,16))
    {
        if(tft.solid[i].spritecol == bedtop)return true;
   else if(tft.solid[i].spritecol == bedbot)return true;
   else if(tft.solid[i].spritecol == bones11)return true;
   else if(tft.solid[i].spritecol == bones12)return true;
   else if(tft.solid[i].spritecol == bones13)return true;
   else if(tft.solid[i].spritecol == bones21)return true; 
   else if(tft.solid[i].spritecol == bones22)return true;
   else if(tft.solid[i].spritecol == bones23)return true;
   else if(tft.solid[i].spritecol == bookstop )return true;
   else if(tft.solid[i].spritecol == booksbot)return true; 
   else if(tft.solid[i].spritecol == boulder){tft.Popup(F(" ""boulder"" "),2,60,20); return true;} //Return True if character have touched a boulder//return true;
   else if(tft.solid[i].spritecol == boulders){tft.Popup(F(" ""boulders"" "),2,60,20); return true;} //Return True if character have touched boulders//return true;
   else if(tft.solid[i].spritecol == bus11)return true;
   else if(tft.solid[i].spritecol == bus12)return true;
   else if(tft.solid[i].spritecol == bus13)return true;
   else if(tft.solid[i].spritecol == bus21)return true;
   else if(tft.solid[i].spritecol == bus22)return true;
   else if(tft.solid[i].spritecol == bus23)return true;
   else if(tft.solid[i].spritecol == bus31)return true;
   else if(tft.solid[i].spritecol == bus32)return true;
   else if(tft.solid[i].spritecol == bus33)return true;
   else if(tft.solid[i].spritecol == bus41)return true;
   else if(tft.solid[i].spritecol == bus43)return true;
   else if(tft.solid[i].spritecol == bus44)return true;
   else if(tft.solid[i].spritecol == cabtop)return true;
   else if(tft.solid[i].spritecol == cabbot)return true;
   else if(tft.solid[i].spritecol == cactus)return true;
   else if(tft.solid[i].spritecol == chimneytop)return true;
   else if(tft.solid[i].spritecol == chimneybot)return true;
   else if(tft.solid[i].spritecol == couchtopl)return true;
   else if(tft.solid[i].spritecol == couchbotl)return true;
   else if(tft.solid[i].spritecol == couchtopr)return true;
   else if(tft.solid[i].spritecol == couchbotr)return true;
   else if(tft.solid[i].spritecol == dish11)return true;
   else if(tft.solid[i].spritecol == dish12)return true;
   else if(tft.solid[i].spritecol == dish13)return true;
   else if(tft.solid[i].spritecol == dish21)return true;
   else if(tft.solid[i].spritecol == dish22)return true;
   else if(tft.solid[i].spritecol == dish23)return true;
   else if(tft.solid[i].spritecol == dish31)return true;
   else if(tft.solid[i].spritecol == dish32)return true;
   else if(tft.solid[i].spritecol == dish33)return true;
   else if(tft.solid[i].spritecol == dishv2)return true;
   else if(tft.solid[i].spritecol == machine1t)return true;
   else if(tft.solid[i].spritecol == machine1b)return true; 
   else if(tft.solid[i].spritecol == machine2t)return true;
   else if(tft.solid[i].spritecol == machine2b)return true;
   else if(tft.solid[i].spritecol == machine3t)return true;
   else if(tft.solid[i].spritecol == machine3b)return true;
   else if(tft.solid[i].spritecol == machine4t)return true;
   else if(tft.solid[i].spritecol == machine4b)return true;
   else if(tft.solid[i].spritecol == machine511)return true;
   else if(tft.solid[i].spritecol == machine512)return true;
   else if(tft.solid[i].spritecol == machine513)return true;
   else if(tft.solid[i].spritecol == machine521)return true;
   else if(tft.solid[i].spritecol == machine522)return true; 
   else if(tft.solid[i].spritecol == machine523)return true;
   else if(tft.solid[i].spritecol == machine531)return true;
   else if(tft.solid[i].spritecol == machine532)return true; 
   else if(tft.solid[i].spritecol == machine533)return true;
   else if(tft.solid[i].spritecol == machine611)return true;
   else if(tft.solid[i].spritecol == machine612)return true; 
   else if(tft.solid[i].spritecol == machine613)return true;
   else if(tft.solid[i].spritecol == machine621)return true;
   else if(tft.solid[i].spritecol == machine622)return true;
   else if(tft.solid[i].spritecol == machine623)return true;
   else if(tft.solid[i].spritecol == machine631)return true;
   else if(tft.solid[i].spritecol == machine632)return true;
   else if(tft.solid[i].spritecol == machine633)return true;
   else if(tft.solid[i].spritecol == mart11)return true;
   else if(tft.solid[i].spritecol == mart12)return true;
   else if(tft.solid[i].spritecol == mart13)return true;
   else if(tft.solid[i].spritecol == mart21)return true;
   else if(tft.solid[i].spritecol == mart22)return true;
   else if(tft.solid[i].spritecol == mart23)return true;
   else if(tft.solid[i].spritecol == mart31)return true;
   else if(tft.solid[i].spritecol == mart32)return true;
   else if(tft.solid[i].spritecol == mart33)return true;
   else if(tft.solid[i].spritecol == mart34)return true;
   else if(tft.solid[i].spritecol == mart41)return true;
   else if(tft.solid[i].spritecol == mart43)return true;
   else if(tft.solid[i].spritecol == mart44)return true;
   else if(tft.solid[i].spritecol == martsign)return true; 
   else if(tft.solid[i].spritecol == palmtl)return true;
   else if(tft.solid[i].spritecol == palmtr)return true;
   else if(tft.solid[i].spritecol == palmbl)return true;
   else if(tft.solid[i].spritecol == palmbr)return true;
   else if(tft.solid[i].spritecol == pot)return true;
   else if(tft.solid[i].spritecol == printerl)return true;
   else if(tft.solid[i].spritecol == printerr)return true;
   else if(tft.solid[i].spritecol == ptreetop)return true;
   else if(tft.solid[i].spritecol == ptreebot)return true;
   else if(tft.solid[i].spritecol == rocktopcap)return true;
   else if(tft.solid[i].spritecol == rockbotcap)return true;
   else if(tft.solid[i].spritecol == rockleftcap)return true;
   else if(tft.solid[i].spritecol == rockrightcap)return true;
   else if(tft.solid[i].spritecol == rockcornertl)return true;
   else if(tft.solid[i].spritecol == rockcornertr)return true;
   else if(tft.solid[i].spritecol == rockcornerbl)return true;
   else if(tft.solid[i].spritecol == rockcornerbr)return true;
   else if(tft.solid[i].spritecol == rockcornersharptl)return true;
   else if(tft.solid[i].spritecol == rockcornersharptr)return true;
   else if(tft.solid[i].spritecol == rockcornersharpbl)return true;
   else if(tft.solid[i].spritecol == rockcornersharpbr)return true;
   else if(tft.solid[i].spritecol == rockwalllc)return true;
   else if(tft.solid[i].spritecol == rockwallrc)return true;
   else if(tft.solid[i].spritecol == rockwall)return true;
   else if(tft.solid[i].spritecol == stoneblockp1)return true;
   else if(tft.solid[i].spritecol == stonelic)return true;
   else if(tft.solid[i].spritecol == stonef)return true;
   else if(tft.solid[i].spritecol == stoneric)return true;
   else if(tft.solid[i].spritecol == stonel)return true;
   else if(tft.solid[i].spritecol == stoner)return true;
   else if(tft.solid[i].spritecol == stoneblc)return true;
   else if(tft.solid[i].spritecol == stonebrc)return true;
   else if(tft.solid[i].spritecol == stonetlc)return true;
   else if(tft.solid[i].spritecol == stonetrc)return true;
   else if(tft.solid[i].spritecol == stonet)return true;
   else if(tft.solid[i].spritecol == stonefloor)return true;
   else if(tft.solid[i].spritecol == caveintl)return true;
   else if(tft.solid[i].spritecol == caveintr)return true;
   else if(tft.solid[i].spritecol == caveinbr)return true;
   else if(tft.solid[i].spritecol == caveoutbl)return true;
   else if(tft.solid[i].spritecol == caveoutbr)return true;
   else if(tft.solid[i].spritecol == tablel)return true;
   else if(tft.solid[i].spritecol == tabler)return true;
   else if(tft.solid[i].spritecol == tablesm)return true;
   else if(tft.solid[i].spritecol == tank11 )return true;
   else if(tft.solid[i].spritecol == tank12)return true;
   else if(tft.solid[i].spritecol == tank21)return true;
   else if(tft.solid[i].spritecol == tank22)return true;
   else if(tft.solid[i].spritecol == tank31)return true;
   else if(tft.solid[i].spritecol == tank32)return true;
   else if(tft.solid[i].spritecol == tomb)return true;
   else if(tft.solid[i].spritecol == water)return true;
//////////////////////////////////////////////////////////////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Action Tiles/////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
/* starts with the upper left hand corner bottom of large rock formation. The order goes up and 
 *  around the world map in a clockwise direction. */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////// imperial basin///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////dungeon 1 to arakeen
   else if((tft.solid[i].spritecol == stonecavei1) && room == 1){room = 2; player_x = 128; player_y = 140; cameraX = -0; cameraY = -704; cameraXMin = -0; cameraYMin = -704;}    
   else if((tft.solid[i].spritecol == stonecaveo1) && room == 2){room = 1; player_x = 144; player_y = 160; cameraX = -416; cameraY = -368; cameraXMin = -960; cameraYMin = -1024;}
   else if((tft.solid[i].spritecol == ladderu1) && room == 2){room = 3; player_x = 144; player_y = 170; cameraX = -128; cameraY = -254; cameraXMin = -336; cameraYMin = -448;}    
   else if((tft.solid[i].spritecol == ladderd1) && room == 3){room = 2; player_x = 80; player_y = 112; cameraX = -0; cameraY = -0; cameraXMin = -0; cameraYMin = -704;}
   
   else if((tft.solid[i].spritecol == fremenblackr1) && room == 3){tft.Popup(F(" ""There are many shops in Arrakeen."" "),1,60,25); return true;}
   else if((tft.solid[i].spritecol == fremenblondel1) && room == 3){tft.Popup(F(" ""Many of the workers commute from"" "),1,60,20); tft.Popup3(F(" ""the villages to the south."" "),1,75,30); return true;}
   else if((tft.solid[i].spritecol == fremenblackl2) && room == 3){tft.Popup(F(" ""Welcome to Arrakeen!"" "),1,90,25); return true;}
   else if((tft.solid[i].spritecol == fremenfblackf1) && room == 3){tft.Popup(F(" ""Do you like comics? Be sure to check"" "),1,50,20); tft.Popup3(F(" ""out Arrakeens Comic shop!"" "),1,75,30);return true;}
   else if((tft.solid[i].spritecol == fremenfelderredf1) && room == 3){tft.Popup(F(" ""My daughter works in the palace."" "),1,65,25); return true;}
   else if((tft.solid[i].spritecol == fremenfbrownl1) && room == 3){tft.Popup(F(" ""Many things can be made from spice"" "),1,55,20); tft.Popup3(F(" ""solids."" "),1,130,30);return true;}
   
//   else if((tft.solid[i].spritecol == chest1) && room == 3 && (ButtonB.fallingEdge()) && item_1 == 1){tft.Popup(F(" ""You got key"" "),1,90,25); AddInv(water); getFirstAvailSlot(); return true;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////// arrakeen room 1 shop levels 1 and 2
   else if((tft.solid[i].spritecol == door1) && room == 3){room = 4; player_x = 124; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 4){room = 3; player_x = 128; player_y = 178; cameraX = -0; cameraY = -368; cameraXMin = -336; cameraYMin = -448;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 4){room = 5; player_x = 256; player_y = 96; cameraX = -800; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 5){room = 4; player_x = 256; player_y = 112; cameraX = -80; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}
   
   else if((tft.solid[i].spritecol == fremenfblonder1) && room == 4){tft.Popup(F(" "" Hmmmm, Pepsi? or Coke? "" "),1,105,25); return true;}
   else if((tft.solid[i].spritecol == fremenelderblackl1) && room == 4){tft.Popup(F(" "" Yes, how much to print a thumper? "" "),1,50,25); return true;}
   else if((tft.solid[i].spritecol == fremenredl1) && room == 4){tft.Popup(F(" "" No! No! No! Thats way too much! "" "),1,60,25); return true;}
   else if((tft.solid[i].spritecol == fremenblackl2) && room == 4){tft.Popup(F(" "" Wait your turn! "" "),1,105,25); return true;}
  
   else if((tft.solid[i].spritecol == fremenfelderblondere1) && room == 5){tft.Popup(F(" "" I can't decide! "" "),1,105,25); return true;}
   else if((tft.solid[i].spritecol == fremenfbrownre1) && room == 5){tft.Popup(F(" "" They never have what I'm looking for! "" "),1,45,25); return true;}
   else if((tft.solid[i].spritecol == register1) && room == 5){tft.Popup(F(" ""Welcome to the Choam one stop shop!"" "),1,55,20); tft.Popup3(F(" ""How may I help you?"" "),1,90,35);return true;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////// arrakeen room 2 hotel levels 1 and 2 and 3
   else if((tft.solid[i].spritecol == door2) && room == 3){room = 6; player_x = 132; player_y = 204; cameraX = -0; cameraY = -304; cameraXMin = -80; cameraYMin = -304;}    
   else if((tft.solid[i].spritecol == exit1) && room == 6){room = 3; player_x = 144; player_y = 160; cameraX = -144; cameraY = -416; cameraXMin = -336; cameraYMin = -448;}
   else if((tft.solid[i].spritecol == stairsr1) && room == 6){room = 7; player_x = 52; player_y = 100; cameraX = -0; cameraY = -0; cameraXMin = -80; cameraYMin = -304;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 7){room = 6; player_x = 52; player_y = 100; cameraX = -0; cameraY = -0; cameraXMin = -80; cameraYMin = -304;}
   else if((tft.solid[i].spritecol == stairsr1) && room == 7){room = 8; player_x = 52; player_y = 96; cameraX = -0; cameraY = -0; cameraXMin = -80; cameraYMin = -304;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 8){room = 7; player_x = 52; player_y = 186; cameraX = -0; cameraY = -304; cameraXMin = -80; cameraYMin = -304;}
   
   else if((tft.solid[i].spritecol == register1) && room == 6){tft.Popup(F(" ""Welcome to the Spice Smugglers Inn!"" "),1,55,20); tft.Popup3(F(" ""How may I help you?"" "),1,90,35);return true;}
   else if((tft.solid[i].spritecol == fremenelderblackl1) && room == 6){tft.Popup(F(" ""I'm here on official business!"" "),1,65,25);return true;}
   else if((tft.solid[i].spritecol == fremenfblackf1) && room == 6){tft.Popup(F(" ""This is my room! Please leave!"" "),1,65,25); return true;}
   else if((tft.solid[i].spritecol == fremenfredre1) && room == 6){tft.Popup(F(" ""Were you raised in seitch? Get"" "),1,60,20); tft.Popup3(F(" ""out of here!!"" "),1,110,35);return true;}
   else if((tft.solid[i].spritecol == fremenblackre1) && room == 6){tft.Popup(F(" ""Fremen Trash!"" "),1,110,25);return true;}
   else if((tft.solid[i].spritecol == fremenfblondef1) && room == 6){tft.Popup(F(" ""Are you with House keeping?"" "),1,60,25);return true;}
   
   else if((tft.solid[i].spritecol == fremenfelderbrownre1) && room == 7){tft.Popup(F(" ""Off worlders here are so"" "),1,90,20); tft.Popup3(F(" ""hateful toward fremen."" "),1,90,35);return true;}
   else if((tft.solid[i].spritecol == fremenfblondere1) && room == 7){tft.Popup(F(" ""My mini bar is empty! Can you tell"" "),1,60,20); tft.Popup3(F(" ""housekeeping?"" "),1,110,35);return true;}
   else if((tft.solid[i].spritecol == fremenblackf1) && room == 7){tft.Popup(F(" ""My wife is from Geidi Prime, Please"" "),1,50,20); tft.Popup3(F(" ""excuse her attitude."" "),1,90,35);return true;}
   else if((tft.solid[i].spritecol == fremenfbrownf1) && room == 7){tft.Popup(F(" ""The spice is in everything here!"" "),1,60,25); return true;}
   else if((tft.solid[i].spritecol == fremenfelderblondel1) && room == 7){tft.Popup(F(" ""I want to try spice wine."" "),1,70,25); return true;}
   
   else if((tft.solid[i].spritecol == fremenfbrownl1) && room == 8){tft.Popup(F(" ""This is a private suite"" "),1,60,25); return true;}
   else if((tft.solid[i].spritecol == fremenblackl1) && room == 8){tft.Popup(F(" ""Sand gets in everything!"" "),1,80,25);return true;}
   else if((tft.solid[i].spritecol == fremenfblondef1) && room == 8){tft.Popup(F(" ""Hi! Are you a fremen?"" "),1,80,25);return true;}
   else if((tft.solid[i].spritecol == fremenblackf1) && room == 8){tft.Popup(F(" ""I've always wanted to meet a fremen."" "),1,45,25);return true;}
   else if((tft.solid[i].spritecol == fremenfblondere1) && room == 8){tft.Popup(F(" ""Ice is a premium on Arrakis!"" "),1,600,25); return true;}
   else if((tft.solid[i].spritecol == fremenredre1) && room == 8){tft.Popup(F(" ""Wait your turn!"" "),1,100,25); return true;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////// arrakeen room 3 factory ?  
   else if((tft.solid[i].spritecol == door3) && room == 3){room = 9; player_x = 128; player_y = 204; cameraX = -128; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == exit1) && room == 9){room = 3; player_x = 144; player_y = 160; cameraX = -336; cameraY = -384; cameraXMin = -336; cameraYMin = -448;}
   
   else if((tft.solid[i].spritecol == register1) && room == 9){tft.Popup(F(" ""Welcome to Spice-x Recyclers!"" "),1,60,20); tft.Popup3(F(" ""How may I help you?"" "),1,90,35);return true;}
   else if((tft.solid[i].spritecol == fremenfblondel1) && room == 9){tft.Popup(F(" ""You can recycle almost anything here"" "),1,45,20); tft.Popup3(F(" ""for 3D printing. Just pick a machine."" "),1,45,35);return true;}
   else if((tft.solid[i].spritecol == fremenfredr1) && room == 9){tft.Popup(F(" ""I'm done with this machine. Feel"" "),1,60,20); tft.Popup3(F(" ""free to use it."" "),1,100,35);return true;}
   else if((tft.solid[i].spritecol == fremenblackre1) && room == 9){tft.Popup(F(" ""So much to do. So little time."" "),1,60,25); return true;}
   else if((tft.solid[i].spritecol == fremenredre1) && room == 9){tft.Popup(F(" ""Don't you hate waiting for recyclers?"" "),1,45,25);return true;}
   else if((tft.solid[i].spritecol == fremenfelderblondere1) && room == 9){tft.Popup(F(" ""I'm alomost done with this load."" "),1,60,25);return true;}
   else if((tft.solid[i].spritecol == fremenfbrownf1) && room == 9){tft.Popup(F(" ""I just started my first load. I'm sure"" "),1,40,20); tft.Popup3(F(" ""there's an open machine here."" "),1,70,35);return true;}
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////// arrakeen room 4 choam office levels 1 and 2 and 3
   else if((tft.solid[i].spritecol == door4) && room == 3){room = 10; player_x = 78; player_y = 204; cameraX = -0; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == exit1) && room == 10){room = 3; player_x = 98; player_y = 158; cameraX = -0; cameraY = -176; cameraXMin = -336; cameraYMin = -448;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 10){room = 11; player_x = 254; player_y = 114; cameraX = -160; cameraY = -0; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 11){room = 10; player_x = 254; player_y = 188; cameraX = -160; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}
   else if((tft.solid[i].spritecol == stairsr1) && room ==11){room = 12; player_x = 254; player_y = 112; cameraX = -160; cameraY = -0; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 12){room = 11; player_x = 242; player_y = 186; cameraX = -160; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}

   else if((tft.solid[i].spritecol == fremenfbrownr1) && room == 10){tft.Popup(F(" ""Choam has the monopoly on all goods"" "),1,50,20); tft.Popup3(F(" ""sold through out the universe."" "),1,70,35);return true;}
   else if((tft.solid[i].spritecol == fremenfblondere1) && room == 10){tft.Popup(F(" ""I can't find the correct directory. "" "),1,50,25); return true;}
   else if((tft.solid[i].spritecol == fremenblackre1) && room == 10){tft.Popup(F(" ""This data hub is not working properly."" "),1,42,25); return true;}
   else if((tft.solid[i].spritecol == fremenbrownre1) && room == 10){tft.Popup(F(" ""Free snacks are just one of the small "" "),1,45,20); tft.Popup3(F(" ""things choam does for its customers."" "),1,45,35);return true;}
   else if((tft.solid[i].spritecol == register1) && room == 10){tft.Popup(F(" ""Welcome to the Choam Embassy on Arrakis."" "),1,37,20); tft.Popup3(F(" ""Do you have an appointment?"" "),1,80,35);return true;}
   else if((tft.solid[i].spritecol == fremenfredre1) && room == 10){tft.Popup(F(" ""Hi. I'm trying to get an appointment "" "),1,50,20); tft.Popup3(F(" ""for a patent on a spice solidifier."" "),1,50,35);return true;}
   else if((tft.solid[i].spritecol == fremenblackr1) && room == 10){tft.Popup(F(" ""I've been waiting for hours!"" "),1,70,25); return true;}
   else if((tft.solid[i].spritecol == fremenblackl2) && room == 10){tft.Popup(F(" ""Even the Ixians have to register"" "),1,60,20); tft.Popup3(F(" ""with choam."" "),1,110,35);return true;}
   
   else if((tft.solid[i].spritecol == fremenredr1) && room == 11){tft.Popup(F(" ""Choam has the monopoly on all goods"" "),1,50,20); tft.Popup3(F(" ""sold through out the universe."" "),1,90,35);return true;}
   
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////// arrakeen room 5 palace levels 1 and 2 and 3 with basement 1 and 2
   else if((tft.solid[i].spritecol == door5) && room == 3){room = 13; player_x = 152; player_y = 204; cameraX = -240; cameraY = -704; cameraXMin = -480; cameraYMin = -704;}    
   else if((tft.solid[i].spritecol == exit1) && room == 13){room = 3; player_x = 160; player_y = 144; cameraX = -128; cameraY = -160; cameraXMin = -336; cameraYMin = -448;}
   else if((tft.solid[i].spritecol == stepsl1) && room == 13){room = 14; player_x = 52; player_y = 114; cameraX = -0; cameraY = -0; cameraXMin = -480; cameraYMin = -64;}
   else if((tft.solid[i].spritecol == stairsr1) && room == 14){room = 13; player_x = 52; player_y = 160; cameraX = -0; cameraY = -256; cameraXMin = -480; cameraYMin = -704;}    
   else if((tft.solid[i].spritecol == stairsl1) && room == 14){room = 13; player_x = 254; player_y = 160; cameraX = -480; cameraY = -256; cameraXMin = -480; cameraYMin = -704;}
   else if((tft.solid[i].spritecol == stepsl2) && room ==13){room = 14; player_x = 252; player_y = 114; cameraX = -480; cameraY = -0; cameraXMin = -480; cameraYMin = -64;}    
   else if((tft.solid[i].spritecol == stepsl3) && room ==13){room = 15; player_x = 252; player_y = 188; cameraX = -80; cameraY = -144; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == stairsl1) && room == 15){room = 13; player_x = 128; player_y = 98; cameraX = -240; cameraY = -0; cameraXMin = -480; cameraYMin = -704;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 13){room = 16; player_x = 174; player_y = 98; cameraX = -240; cameraY = -0; cameraXMin = -480; cameraYMin = -544;}
   else if((tft.solid[i].spritecol == stepsl1) && room == 16){room = 13; player_x = 174; player_y = 98; cameraX = -240; cameraY = -0; cameraXMin = -480; cameraYMin = -704;}
   else if((tft.solid[i].spritecol == stairsr1) && room == 16){room = 17; player_x = 144; player_y = 100; cameraX = -96; cameraY = -0; cameraXMin = -160; cameraYMin = -224;}
   else if((tft.solid[i].spritecol == stepsl1) && room == 17){room = 16; player_x = 130; player_y = 100; cameraX = -240; cameraY = -0; cameraXMin = -480; cameraYMin = -704;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////// arrakeen room 6  school/auction house?
   else if((tft.solid[i].spritecol == door6) && room == 3){room = 18; player_x = 152; player_y = 204; cameraX = -80; cameraY = -144; cameraXMin = -160; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 18){room = 3; player_x = 144; player_y = 160; cameraX = -240; cameraY = -272; cameraXMin = -336; cameraYMin = -448;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 18){room = 19; player_x = 240; player_y = 98; cameraX = -160; cameraY = -0; cameraXMin = -160; cameraYMin = -144;}
   else if((tft.solid[i].spritecol == stepsl1) && room == 19){room = 18; player_x = 256; player_y = 98; cameraX = -160; cameraY = -0; cameraXMin = -160; cameraYMin = -144;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////// arrakeen room 7 comic shop  
   else if((tft.solid[i].spritecol == door7) && room == 3){room = 20; player_x = 152; player_y = 204; cameraX = -96; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == exit1) && room == 20){room = 3; player_x = 128; player_y = 156; cameraX = -0; cameraY = -16; cameraXMin = -336; cameraYMin = -448;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////// arrakeen room 8 grocery store
   else if((tft.solid[i].spritecol == door8) && room == 3){room = 21; player_x = 152; player_y = 204; cameraX = -32; cameraY = -224; cameraXMin = -480; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 21){room = 3; player_x = 144; player_y = 160; cameraX = -144; cameraY = -0; cameraXMin = -336; cameraYMin = -448;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////// arrakeen room 9 water cistern
   else if((tft.solid[i].spritecol == door9) && room == 3){room = 22; player_x = 144; player_y = 204; cameraX = -96; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == exit1) && room == 22){room = 3; player_x = 144; player_y = 156; cameraX = -320; cameraY = -32; cameraXMin = -336; cameraYMin = -448;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////////////// arrakeen room 10 security
   else if((tft.solid[i].spritecol == door10) && room == 3){room = 23; player_x = 152; player_y = 204; cameraX = -96; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == exit1) && room == 23){room = 3; player_x = 144; player_y = 160; cameraX = -352; cameraY = -160; cameraXMin = -336; cameraYMin = -448;}
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////dungeon 2 to village 2
   else if((tft.solid[i].spritecol == stonecavei2) && room == 1){room = 24; player_x = 192; player_y = 140; cameraX = -320; cameraY = -384; cameraXMin = -320; cameraYMin = -384;}    
   else if((tft.solid[i].spritecol == stonecaveo1) && room == 24){room = 1; player_x = 144; player_y = 160; cameraX = -208; cameraY = -880; cameraXMin = -880; cameraYMin = -1024;}
   else if((tft.solid[i].spritecol == ladderu1) && room == 24){room = 25; player_x = 144; player_y = 160; cameraX = -64; cameraY = -144; cameraXMin = -240; cameraYMin = -288;}    
   else if((tft.solid[i].spritecol == ladderd1) && room == 25){room = 24; player_x = 150; player_y = 176; cameraX = -128; cameraY = -112; cameraXMin = -320; cameraYMin = -384;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 1
   else if((tft.solid[i].spritecol == door1) && room == 25){room = 26; player_x = 244; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 26){room = 25; player_x = 144; player_y = 160; cameraX = -0; cameraY = -272; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 2
   else if((tft.solid[i].spritecol == door2) && room == 25){room = 27; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 27){room = 25; player_x = 144; player_y = 160; cameraX = -192; cameraY = -288; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 3
   else if((tft.solid[i].spritecol == door3) && room == 25){room = 28; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 28){room = 25; player_x = 112; player_y = 160; cameraX = -0; cameraY = -160; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 4
   else if((tft.solid[i].spritecol == door4) && room == 25){room = 29; player_x = 244; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 29){room = 25; player_x = 144; player_y = 160; cameraX = -176; cameraY = -160; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 5
   else if((tft.solid[i].spritecol == door5) && room == 25){room = 30; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 30){room = 25; player_x = 192; player_y = 160; cameraX = -240; cameraY = -112; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 6
   else if((tft.solid[i].spritecol == door6) && room == 25){room = 31; player_x = 58; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 31){room = 25; player_x = 112; player_y = 160; cameraX = -0; cameraY = -32; cameraXMin = -240; cameraYMin = -288;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 2 room 7
   else if((tft.solid[i].spritecol == door7) && room == 25){room = 32; player_x = 244; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 32){room = 25; player_x = 144; player_y = 160; cameraX = -96; cameraY = -16; cameraXMin = -240; cameraYMin = -288;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////// village 2 room 8 shop levels 1 and 2
   else if((tft.solid[i].spritecol == door8) && room == 25){room = 33; player_x = 124; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 33){room = 25; player_x = 144; player_y = 160; cameraX = -240; cameraY = -0; cameraXMin = -240; cameraYMin = -288;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 33){room = 34; player_x = 256; player_y = 96; cameraX = -800; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 34){room = 33; player_x = 256; player_y = 112; cameraX = -80; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////dungeon 3 to village 3
   else if((tft.solid[i].spritecol == stonecavei3) && room == 1){room = 35; player_x = 96; player_y = 148; cameraX = -0; cameraY = -96; cameraXMin = -512; cameraYMin = -96;}    
   else if((tft.solid[i].spritecol == stonecaveo1) && room == 35){room = 1; player_x = 144; player_y = 160; cameraX = -768; cameraY = -784; cameraXMin = -880; cameraYMin = -1024;}
   else if((tft.solid[i].spritecol == ladderu1) && room == 35){room = 36; player_x = 176; player_y = 160; cameraX = -192; cameraY = -96; cameraXMin = -160; cameraYMin = -224;}    
   else if((tft.solid[i].spritecol == ladderd1) && room == 36){room = 35; player_x = 240; player_y = 80; cameraX = -512; cameraY = -0; cameraXMin = -512; cameraYMin = -96;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 3 room 1
   else if((tft.solid[i].spritecol == door1) && room == 36){room = 37; player_x = 244; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 37){room = 36; player_x = 144; player_y = 160; cameraX = -0; cameraY = -192; cameraXMin = -160; cameraYMin = -224;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 3 room 2
   else if((tft.solid[i].spritecol == door2) && room == 36){room = 38; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 38){room = 36; player_x = 144; player_y = 160; cameraX = -160; cameraY = -224; cameraXMin = -160; cameraYMin = -224;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 3 room 3
   else if((tft.solid[i].spritecol == door3) && room == 36){room = 39; player_x = 244; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 39){room = 36; player_x = 144; player_y = 160; cameraX = -0; cameraY = -80; cameraXMin = -160; cameraYMin = -224;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 3 room 4
   else if((tft.solid[i].spritecol == door4) && room == 36){room = 40; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 40){room = 36; player_x = 144; player_y = 160; cameraX = -96; cameraY = -80; cameraXMin = -160; cameraYMin = -224;}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////// village 3 room 5
   else if((tft.solid[i].spritecol == door5) && room == 36){room = 41; player_x = 152; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -0; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 41){room = 36; player_x = 144; player_y = 144; cameraX = -16; cameraY = -0; cameraXMin = -160; cameraYMin = -224;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////// village 3 room 6 shop levels 1 and 2
   else if((tft.solid[i].spritecol == door6) && room == 36){room = 42; player_x = 124; player_y = 204; cameraX = -0; cameraY = -144; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == exit1) && room == 42){room = 36; player_x = 192; player_y = 160; cameraX = -208; cameraY = -16; cameraXMin = -160; cameraYMin = -224;}
   else if((tft.solid[i].spritecol == stairsl1) && room == 42){room = 43; player_x = 256; player_y = 96; cameraX = -800; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}    
   else if((tft.solid[i].spritecol == stepsl1) && room == 43){room = 42; player_x = 256; player_y = 112; cameraX = -80; cameraY = -0; cameraXMin = -80; cameraYMin = -144;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////// dungeon 4 and desert path 1
   else if((tft.solid[i].spritecol == stonecavei4) && room == 1){room = 44; player_x = 176; player_y = 128; cameraX = -592; cameraY = -176; cameraXMin = -592; cameraYMin = -176;}    
   else if((tft.solid[i].spritecol == stonecaveo1) && room == 44){room = 1; player_x = 144; player_y = 144; cameraX = -80; cameraY = -0; cameraXMin = -880; cameraYMin = -1024;}
   else if((tft.solid[i].spritecol == stonecaveo2) && room == 44){room = 45; player_x = 208; player_y = 160; cameraX = -4480; cameraY = -32; cameraXMin = -4480; cameraYMin = -64;}
   else if((tft.solid[i].spritecol == stonecavei1) && room == 45){room = 44; player_x = 70; player_y = 192; cameraX = -0; cameraY = -176; cameraXMin = -592; cameraYMin = -176;}    
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////     

    }
       
   }
   return false; // Return false if don't touch anything
  }



#endif
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////   



   
