#include <VGAX.h>
#include "pitches.h"

#define IMG_MARIOMASK_WIDTH 16
#define IMG_MARIOMASK_BWIDTH 4
#define IMG_MARIOMASK_HEIGHT 16
#define IMG_MARIOMASK_SPRITES_CNT 7
//data size=512 bytes
const unsigned char img_mariomask_data[IMG_MARIOMASK_SPRITES_CNT][IMG_MARIOMASK_HEIGHT][IMG_MARIOMASK_BWIDTH] PROGMEM={
{ { 255, 255, 255, 255, }, { 255, 192,   3, 255, }, { 255,   0,   0,  63, }, { 252,   0,   0,  15, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 255,   0,   0, 255, }, { 252,   0,   3, 255, }, { 240,   0,   0, 255, }, { 240,   0,   0, 255, }, { 252,   0,   0, 255, }, { 252,   0,   3, 255, }, { 255,   0,   3, 255, }, { 255,   0,   3, 255, }, },
{ { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, { 170, 170, 170, 170, }, },
{ { 255, 192,  15, 255, }, { 255,   0,   0,  63, }, { 252,   0,   0,  15, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 252,   0,   0, 255, }, { 192,   0,   0,  63, }, {   0,   0,   0,  15, }, {   0,   0,   0,   3, }, { 192,   0,   0,   3, }, { 240,   0,   0,  15, }, { 192,   0,   0,  15, }, { 192,   3,   0,  63, }, { 240,   3, 192, 255, }, },
{ { 255, 192,  15,   3, }, { 255,   0,   0,   0, }, { 252,   0,   0,   0, }, { 252,   0,   0,   3, }, { 240,   0,   0,   3, }, { 240,   0,   0,   3, }, { 252,   0,   0,  15, }, { 252,   0,   0,  15, }, { 240,   0,   0,  63, }, { 192,   0,   0,   3, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, { 192,   0,   0,   3, }, {   0,   0,   0,   3, }, {   0,   0,  63,  15, }, { 195,   3, 255, 255, }, },
{ { 255, 192,   3, 255, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 192,   0,   0,   3, }, { 192,   0,   0,   3, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, { 192,   0,   0,   3, }, { 240,   0,   0,  15, }, { 240,   0,   0,  15, }, { 252,   0,   0,  63, }, { 255,   0,   0, 255, }, },
{ { 255, 240,  15, 255, }, { 255, 192,   3, 255, }, { 255,   0,   0, 255, }, { 252,   0,   0,  63, }, { 240,   0,   0,  15, }, { 192,   0,   0,   3, }, { 192,   0,   0,   3, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, { 192,   0,   0,   3, }, { 255,   0,   0, 255, }, { 240,   0,   0,  15, }, { 192,   0,   0,   3, }, { 192,   0,   0,   3, }, { 240,   3, 192,  15, }, },
{ { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 255, 255, 255, }, { 255, 240,  15, 255, }, { 252,   0,   0,  63, }, { 192,   0,   0,   3, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, { 192,   0,   0,   3, }, { 252,   0,   0,  63, }, { 255,   0,   0, 255, }, { 192,   3, 192,   3, }, },
};

#define IMG_MARIO_WIDTH 16
#define IMG_MARIO_BWIDTH 4
#define IMG_MARIO_HEIGHT 16
#define IMG_MARIO_SPRITES_CNT 7
//data size=1408 bytes
const unsigned char img_mario_data[IMG_MARIO_SPRITES_CNT][IMG_MARIO_HEIGHT][IMG_MARIO_BWIDTH] PROGMEM={
{ {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,  42, 168,   0, }, {   0, 170, 170, 128, }, {   0,  15,  48,   0, }, {   3, 195,  63, 192, }, {   3, 195, 207, 192, }, {   0,  63,   0,   0, }, {   0,  15, 252,   0, }, {   0, 162, 160,   0, }, {   2, 168, 168,   0, }, {   2, 168,  84,   0, }, {   0, 252,  20,   0, }, {   0, 250, 128,   0, }, {   0,  42, 160,   0, }, {   0,   0,   0,   0, }, },
{ {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, {  85,  85,  85,  85, }, },
{ {   0,   0,   0,   0, }, {   0,  42, 160,   0, }, {   0, 170, 170, 128, }, {   0,  15,  48,   0, }, {   3, 195,  63, 192, }, {   3, 195, 207, 192, }, {   0,  63,   0,   0, }, {   0,  15, 252,   0, }, {   2, 162, 160,   0, }, {  62, 168, 168, 128, }, {  63, 161,  84, 176, }, {  15,   5,  84,  48, }, {   0,   1,  82, 128, }, {  10,   0,  10, 128, }, {  10, 160,  42,   0, }, {   0,   0,   0,   0, }, },
{ {   0,   0,   0,   0, }, {   0,  42, 160,   0, }, {   0, 170, 170,   0, }, {   0,  15,  48,  32, }, {   3, 195,  63, 224, }, {   3, 195, 207, 224, }, {   0,  63,   0,   0, }, {   0,  15, 255, 128, }, {   2, 162, 162,   0, }, {   0, 168, 168,   0, }, {  63,  40,  85,  40, }, {  63,  33,  84, 168, }, {   0,   4,   0, 160, }, {  42,  16,   0, 160, }, {  40,   0,   0,   0, }, {   0,   0,   0,   0, }, },
{ {   0,   0,   0,   0, }, {   0,  61, 124,   0, }, {   3, 245,  95, 192, }, {   5,  95, 245,  80, }, {   5, 127, 253,  80, }, {  53, 255, 255,  92, }, {  61, 255, 255, 124, }, {  61, 255, 255, 124, }, {  53, 127, 253,  92, }, {  21,  95, 245,  84, }, {  21,   0,   0,  84, }, {   0, 243, 207,   0, }, {   3, 243, 207, 192, }, {   3, 255, 255, 192, }, {   0, 255, 255,   0, }, {   0,   0,   0,   0, }, },
{ {   0,   0,   0,   0, }, {   0,  10, 160,   0, }, {   0,  42, 168,   0, }, {   0, 170, 170,   0, }, {   2, 170, 170, 128, }, {   8,  42, 168,  32, }, {  10, 192,   3, 160, }, {  42, 206, 179, 168, }, {  42, 254, 191, 168, }, {  42, 170, 170, 168, }, {   0, 175, 250,   0, }, {   0,  63, 252,   0, }, {   0,  63, 252,   0, }, {   0,  15, 240,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, },
{ {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,   0,   0,   0, }, {   0,  10, 160,   0, }, {   2, 170, 170, 128, }, {  40,  10, 160,  40, }, {  47, 240,  15, 248, }, {   2, 170, 170, 128, }, {   0, 255, 255,   0, }, {   0,  48,  12,   0, }, {   0,   0,   0,   0, }, },
};

#define WORLD_WIDTH 8
#define WORLD_HEIGHT 5
#define WORLD_TOTAL_WIDTH 21
unsigned char world[5][20] = {
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  { 0, 0, 3, 0, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
};

#define BLOCKS_WIDTH 16
#define BLOCKS_BWIDTH 4
#define BLOCKS_HEIGHT 16
#define BLOCKS_SPRITES_CNT 5
//data size=320 bytes
const unsigned char blocks_data[BLOCKS_SPRITES_CNT][BLOCKS_HEIGHT][BLOCKS_BWIDTH] PROGMEM={
{ { 191, 255,  47, 254, }, { 234, 170,  58, 168, }, { 234, 170,  58, 168, }, { 234, 170,  58, 168, }, { 234, 170,  50, 168, }, { 234, 170,  32,   2, }, { 234, 170,  63, 252, }, { 234, 170,  58, 168, }, { 234, 170,  58, 168, }, { 234, 170,  58, 168, }, {  10, 168, 234, 168, }, { 240, 168, 234, 168, }, { 239,   3, 170, 168, }, { 234, 243, 170, 168, }, { 234, 163, 170, 160, }, { 128,  11,   0,   2, }, },
{ { 255, 255, 255, 255, }, { 170, 168, 170, 168, }, { 170, 168, 170, 168, }, {   0,   0,   0,   0, }, { 168, 170, 168, 170, }, { 168, 170, 168, 170, }, { 168, 170, 168, 170, }, {   0,   0,   0,   0, }, { 170, 168, 170, 168, }, { 170, 168, 170, 168, }, { 170, 168, 170, 168, }, {   0,   0,   0,   0, }, { 168, 170, 168, 170, }, { 168, 170, 168, 170, }, { 168, 170, 168, 170, }, {   0,   0,   0,   0, }, },
{ {  42, 170, 170, 168, }, { 191, 255, 255, 252, }, { 179, 255, 255, 204, }, { 191, 234, 175, 252, }, { 191, 160,  43, 252, }, { 191, 163, 232, 252, }, { 191, 163, 232, 252, }, { 191, 195, 168, 252, }, { 191, 254, 128, 252, }, { 191, 254, 143, 252, }, { 191, 255,  15, 252, }, { 191, 254, 191, 252, }, { 191, 254, 143, 252, }, { 179, 255,  15, 204, }, { 191, 255, 255, 252, }, {   0,   0,   0,   0, }, },
{ {   0,   0,   0,   0, }, {  42, 170, 170, 168, }, {  34, 170, 170, 136, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  42, 170, 170, 168, }, {  34, 170, 170, 136, }, {  42, 170, 170, 168, }, {   0,   0,   0,   0, }, },
{ { 191, 255, 255, 252, }, { 239, 255, 255, 240, }, { 251, 255, 255, 192, }, { 254, 255, 255,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 255, 170, 170,   0, }, { 252,   0,   0, 128, }, { 240,   0,   0,  32, }, { 192,   0,   0,   8, }, {   0,   0,   0,   2, }, }
};

#define COIN_WIDTH 8
#define COIN_BWIDTH 2
#define COIN_HEIGHT 8
#define COIN_SPRITES_CNT 2
//data size=32 bytes
const unsigned char coin_data[COIN_SPRITES_CNT][COIN_HEIGHT][COIN_BWIDTH] PROGMEM={
{ {  84,  21, }, {  83, 197, }, {  79,  49, }, {  79,  49, }, {  79,  49, }, {  76,  49, }, {  83, 197, }, {  84,  21, }, },
{ {  85,  85, }, {  85,  85, }, {  85,  85, }, {  85,  85, }, {  85,  85, }, {  85,  85, }, {  85,  85, }, {  85,  85, }, }
};

#define START_PANEL_WIDTH 59
#define START_PANEL_BWIDTH 15
#define START_PANEL_HEIGHT 42
//data size=630 bytes
const unsigned char start_panel_data[START_PANEL_HEIGHT][START_PANEL_BWIDTH] PROGMEM={
{ 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 240, }, { 234, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 160, }, { 239, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 175, 160, }, { 239,  42, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 175,  32, }, { 232,  43, 254, 171, 250, 254, 191, 254, 170, 191, 254, 191, 254, 168,  32, }, { 234, 175, 255, 171, 250, 254, 191, 255, 170, 255, 254, 191, 255, 170, 160, }, { 234, 191, 255, 235, 250, 254, 191, 255, 235, 255, 254, 191, 255, 234, 160, }, { 234, 191, 255, 203, 242, 252, 191, 255, 203, 255, 252, 191, 255, 202, 160, }, { 234, 191, 192,  11, 242, 252, 191,  63, 203, 240,   0, 191,  63, 202, 160, }, { 234, 191, 252, 171, 242, 252, 191,  63, 203, 243, 250, 191,  63,  10, 160, }, { 234, 175, 255,  43, 242, 252, 191,  63,  11, 243, 242, 191,  60,  42, 160, }, { 234, 163, 255, 203, 242, 252, 191,  63,  43, 243, 242, 191,  63,  42, 160, }, { 234, 168,  63, 203, 255, 252, 191,  60,  43, 242,   2, 191,  63, 234, 160, }, { 234, 191, 255, 203, 255, 252, 191,  32, 171, 255, 254, 191,  47, 202, 160, }, { 234, 191, 255, 203, 255, 252, 191,  42, 171, 255, 252, 191,  47, 202, 160, }, { 234, 175, 255,  10, 255, 240, 191,  42, 170, 255, 252, 191,  47, 202, 160, }, { 234, 163, 252,  42,  63, 194, 191,  42, 170,  63, 252, 191,  47, 202, 160, }, { 234, 168,   0, 170, 128,  10, 160,  42, 170, 128,   0, 160,  40,  10, 160, }, { 234, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 160, }, { 234, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 160, }, { 234, 171, 250, 191, 170, 175, 250, 175, 255, 170, 254, 171, 254, 170, 160, }, { 234, 175, 254, 255, 234, 191, 254, 175, 255, 234, 254, 175, 255, 170, 160, }, { 234, 191, 255, 255, 250, 255, 255, 175, 255, 250, 254, 191, 255, 234, 160, }, { 234, 191, 255, 255, 250, 255, 255, 175, 255, 250, 254, 191, 255, 234, 160, }, { 234, 191,  15, 195, 242, 252,  63,  47, 195, 242, 252, 191,  15, 202, 160, }, { 234, 191,  15, 195, 242, 252,  63,  47, 195, 242, 252, 191,  15, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 203, 242, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 203, 242, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 207, 194, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 207,  10, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 255, 255,  47, 207, 202, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 255, 255,  47, 195, 250, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 252,  63,  47, 195, 242, 252, 191,  47, 202, 160, }, { 234, 191,  47, 203, 242, 252,  63,  47, 203, 242, 252, 191, 255, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 203, 242, 252, 191, 255, 202, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 203, 242, 252, 175, 255,  10, 160, }, { 234, 191,  47, 203, 242, 252, 191,  47, 203, 242, 252, 163, 252,  42, 160, }, { 239, 160,  40,  10,   2, 128, 160,  40,  10,   2, 128, 168,   0, 175, 160, }, { 239,  42, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 175,  32, }, { 232,  42, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 168,  32, }, { 234, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 170, 160, }, { 192,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, }, };

VGAX vga;

boolean button1 = 1;
boolean button2 = 1;
boolean button3 = 1;
boolean button4 = 1;
boolean jump = 0;
boolean coin_jump = 0;
boolean enemy = 1;
boolean game_start = 0;
boolean game_over = 0;

byte mario_x = 8;
byte mario_y = 48;
byte world_offset = 0;
byte block_offset = 0;
byte dir = 0;
byte jump_dir = 0;
byte coins = 0;
byte coin_x = 2*16+4;
byte coin_y = 8;
byte coin_cnt = 0;
byte enemy_y = 48;
short enemy_x = 96;
double checkpoint = 0;

void setup() {
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  
  vga.begin(true);
  vga.clear(11);
  draw_game();
  draw_start_panel();
}

void processInputs() {
  button1 = digitalRead(4);
  button2 = digitalRead(5);
  button3 = digitalRead(6);
//  button4 = digitalRead(7);
}

void draw_mario(byte data, byte mask){
  vga.blitwmask((byte*)(img_mario_data[data]), (byte*)(img_mariomask_data[mask]), IMG_MARIO_WIDTH, IMG_MARIO_HEIGHT, mario_x, mario_y);
}

void draw_block(short block, char dx, char dy){
  vga.blit((byte*)blocks_data[block], BLOCKS_WIDTH, BLOCKS_HEIGHT, dx, dy);
}

void draw_coin(byte data){
  vga.blit((byte*)coin_data[data], COIN_WIDTH, COIN_HEIGHT, coin_x - 16 * world_offset - block_offset, coin_y);
}

void draw_enemy(byte data, byte mask){
  vga.blitwmask((byte*)(img_mario_data[data]), (byte*)(img_mariomask_data[mask]), IMG_MARIO_WIDTH, IMG_MARIO_HEIGHT, enemy_x, enemy_y);
}

void draw_start_panel(){
  vga.blit((byte*)start_panel_data, START_PANEL_WIDTH, START_PANEL_HEIGHT, 30, 19);
}

void draw_world(){
  vga.clear(1);
  for (short i = 0; i < WORLD_HEIGHT; i++){
    for (short j = world_offset; j <= WORLD_WIDTH + world_offset; j++){
      if (world[i][j] == 0) continue;
      else if (world[i][j] == 1) draw_block(0, 16*(j-world_offset)-block_offset, 16*i);
      else if (world[i][j] == 2) draw_block(1, 16*(j-world_offset)-block_offset, 16*i);
      else if (world[i][j] == 3) draw_block(2, 16*(j-world_offset)-block_offset, 16*i);
      else if (world[i][j] == 4) draw_block(3, 16*(j-world_offset)-block_offset, 16*i);
      else if (world[i][j] == 5) draw_block(4, 16*(j-world_offset)-block_offset, 16*i);
    }
  }
}

void draw_game(){
  draw_world();
  draw_mario(0, 0);
  draw_enemy(5, 5);
}

void move_right(){
  if (vga.getpixel(mario_x + 16, mario_y) == 1 && vga.getpixel(mario_x + 16, mario_y + 15) == 1){
    if (mario_x >= WORLD_WIDTH / 2 * 16 - 16 && (world_offset < WORLD_TOTAL_WIDTH - WORLD_WIDTH - 1 || block_offset < 8)){
      block_offset += 4;
      if (block_offset > 15){
        block_offset = 0;
        world_offset += 1;
      }
      draw_world();
      draw_mario(2, 2);
      vga.delay(30);
      
      block_offset += 4;
      if (block_offset > 15){
        block_offset = 0;
        world_offset += 1;
      }
      draw_world();
      draw_mario(0, 0);
      vga.delay(30);
    } else{
      draw_mario(1, 0);
      mario_x += 2;
      draw_mario(2, 2);
      vga.delay(30);
    
      draw_mario(1, 2);
      mario_x += 2;
      draw_mario(0, 0);
      vga.delay(30);  
    } 
  }
}

void move_left(){
  if (vga.getpixel(mario_x - 1, mario_y) == 1 && vga.getpixel(mario_x - 1, mario_y + 15) == 1){
    draw_mario(1, 0);
    mario_x -= 2;
    draw_mario(2, 2);
    vga.delay(30);
    
    draw_mario(1, 2);
    mario_x -= 2;
    draw_mario(0, 0);
    vga.delay(30);
  }
}

void jump_left(){
  if (vga.getpixel(mario_x - 1, mario_y) == 1 && vga.getpixel(mario_x - 1, mario_y + 15) == 1){
    draw_mario(1, 3);
    mario_x -= 4;
    if (dir == 1 && mario_y > 2 && vga.getpixel(mario_x, mario_y - 1) == 1 && vga.getpixel(mario_x + 15, mario_y - 1) == 1){ mario_y -= 4; }
    if (dir == 2 && mario_y < 80 && vga.getpixel(mario_x, mario_y + 16) == 1 && vga.getpixel(mario_x + 15, mario_y + 16) == 1){ mario_y += 4; }
    draw_mario(3, 3);
    vga.delay(30);
  }
  jump_dir = 0;
}

void jump_right(){
  if (vga.getpixel(mario_x + 16, mario_y) == 1 && vga.getpixel(mario_x + 16, mario_y + 15) == 1){
    if (mario_x >= WORLD_WIDTH / 2 * 16 - 16 && (world_offset < WORLD_TOTAL_WIDTH - WORLD_WIDTH - 1 || block_offset < 8)){
      block_offset += 8;
      if (block_offset > 15){
        block_offset = 0;
        world_offset += 1;
      }
      draw_world();
      draw_mario(3, 3);
      vga.delay(30);
   } else{
      draw_mario(1, 3);
      mario_x += 4;
      if (dir == 1 && mario_y > 2 && vga.getpixel(mario_x, mario_y - 1) == 1 && vga.getpixel(mario_x + 15, mario_y - 1) == 1){ mario_y -= 4; }
      if (dir == 2 && mario_y < 80 && vga.getpixel(mario_x, mario_y + 16) == 1 && vga.getpixel(mario_x + 15, mario_y + 16) == 1){ mario_y += 4; }
      draw_mario(3, 3);
      vga.delay(30); 
    }
  }
  jump_dir = 0;
}

void move_up(){
  if (dir == 0){
    jump = false;
  } if (dir == 1){
    if (mario_y < 2 || vga.getpixel(mario_x, mario_y - 1) != 1 || vga.getpixel(mario_x + 15, mario_y - 1) != 1){
      dir = 2;
    } else {
      draw_mario(1, 0);
      draw_mario(1, 3);
      mario_y -= 4;
      draw_mario(3, 3);
      vga.delay(30);
      
      if (jump_dir == 1)
        jump_left();
      else if (jump_dir == 2)
        jump_right();
    }
  } else if (dir == 2){
    if (mario_y >= 80 || vga.getpixel(mario_x, mario_y + 16) != 1 || vga.getpixel(mario_x + 15, mario_y + 16) != 1){
      dir = 0;
      draw_mario(1, 3);
      draw_mario(0, 0);
      jump = false;
      jump_dir = 0;
    } else {
      draw_mario(1, 3);
      mario_y += 4;
      draw_mario(3, 3);
      vga.delay(30);
      
      if (jump_dir == 1)
        jump_left();
      else if (jump_dir == 2)
        jump_right();
    }
  }
}

void move_coin(){
  if (coins > 2 && coin_cnt == 0){
    draw_block(3, 32 - 16 * world_offset - block_offset, 16);
    world[1][2] = 4;
  }
  if (coin_cnt == 4){
    draw_coin(1);
    coin_cnt = 0;
    coin_jump = false;
  } else{
    draw_coin(1);
    coin_y = 8 - 2 * coin_cnt;
    draw_coin(0);
    coin_cnt += 1;
  }
}

void jmp(){
  jump = true;
  dir = 1;
}

void test_drop(){
  if (vga.getpixel(mario_x, mario_y + 16) == 1 && vga.getpixel(mario_x + 15, mario_y + 16) == 1){
    jump = true;
    dir = 2; 
  }
  if (mario_y >= 64)
    game_over = true;
}

void move_enemy(){
  if (mario_x + 16 >= enemy_x && mario_x + 16 <= enemy_x + 4 && enemy_y - mario_y < 16){
    game_over = true;
  } else if (mario_x > enemy_x - 16 && mario_x < enemy_x + 16 && mario_y + 16 == enemy_y){
    draw_enemy(1, 5);
    draw_enemy(6, 6);
    vga.delay(30);
    draw_enemy(1, 6);
    enemy_x = -16;
    enemy = false;
  } else if (vga.millis() - checkpoint > 500){
    draw_enemy(1, 5);
    enemy_x -= 4;
    draw_enemy(5, 5);
    if (enemy_x < -16) enemy = false;
    checkpoint = vga.millis();
  }
}

void restart_game(){
  jump = 0;
  coin_jump = 0;
  enemy = 1;
  mario_x = 8;
  mario_y = 48;
  world_offset = 0;
  block_offset = 0;
  dir = 0;
  jump_dir = 0;
  coins = 0;
  coin_x = 2*16+4;
  coin_y = 8;
  coin_cnt = 0;
  enemy_y = 48;
  enemy_x = 80;
  checkpoint = vga.millis();
  world[1][2] = 3;
}

void loop(){
  processInputs();

  if (game_over){
    game_start = false;
    game_over = false;
    draw_start_panel();
    restart_game();
  }
  if (!game_start){
    if (!button3) {
      game_start = true;
      draw_game();
    }
  } 
  else{
    if (!jump) test_drop();
      
    if (!button1){
      if (jump) jump_dir = 2;
      else move_right();
    }
    else if (!button2){
      if (jump) jump_dir = 1;
      else move_left();
    }
    else if (!button3 && dir == 0) {jump = true; dir = 1;}
  
    if (jump) move_up();
    if (coins < 3 && world_offset < 3 && mario_y == 32 && mario_x > 16 - 16 * world_offset - block_offset && mario_x < 48 - 16 * world_offset - block_offset){ coin_jump = true; coins += 1; }

    if (coin_jump) move_coin();

    if (enemy) move_enemy();
  }
}
