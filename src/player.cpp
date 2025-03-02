#include "player.h"
#include "grid.h"
#include "colours.h"
#include <raylib.h>
#include <math.h>

Player::Player() { 
    colours = GetCellColours();
    Initialise();
}

void Player::Initialise() {
    posX = 1;
    posY = 1;
    facing = 0;
}

void Player::Draw() {
    // TODO: UNHARDCODE WITH CELL SIZE VARIABLE
    DrawRectangle(posX * 16, posY * 16, 16 - 1, 16 - 1, colours[3]);
}

void Player::Move() {
    // float velocity = 0.1;

    // switch (facing) {
    //     // TODO: UNHARDCODE 31 AND 28 WITH PROPER ROW AND COLUMN SIZE
        
    //     case 1: // Up.
    //         if ((posY -= velocity) <= 0) {posY = 31;}
    //         break;

    //     case 2: // Right.
    //         if ((posX += velocity) >= 28) {posX = 0;}
    //         break;

    //     case 3: // Down.
    //         if (grid[(int)floor(posY + velocity)])
    //         if ((posY += velocity) >= 31) {posY = 0;}
    //         break;

    //     case 4: // Left.
    //         if ((posX -= velocity) <= 0) {posX = 28;}
    //         break;
    // }
}