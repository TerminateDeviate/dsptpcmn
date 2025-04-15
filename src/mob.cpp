#include "mob.h"
#include "grid.h"
#include "colours.h"
#include <iostream>
#include <raylib.h>
#include <math.h>

Mob::Mob() { 
    colours = GetCellColours();
    Initialise();
}

void Mob::Initialise() {
    rot = 0;
    queuedRot = 0;
}

void Mob::Draw() {
    // TODO: UNHARDCODE WITH CELL SIZE VARIABLE
    DrawRectangle(posX * 16, posY * 16, 16 - 1, 16 - 1, colours[colour]);
}

void Mob::Move(int rot) {
    // TODO: UNHARCODE WITH PROPER WIDTH AND HEIGHT (28 BY 31)
    switch (rot) {
        // UP
        case 1:
            posY -= speed();
            if (posY <= 0) posY = 30;
            break;
        // RIGHT
        case 2:
            posX += speed();
            if (posX > 27) posX = 0;
            break;
        // DOWN
        case 3:
            posY += speed();
            if (posY > 30) posY = 0;
            break;
        // LEFT
        case 4:
            posX -= speed();
            if (posX <= 0) posX = 27;
            break;
    }
}

void Mob::Rotate(int newRot) {
    // queuedRot = newRot;
    // if (CanMove(newRot)) {
    //     rot = queuedRot;
    // }
    rot = newRot;
}

bool Mob::CanMove(int rot, int grid[31][28]) {
    // Down
    // if (rot == 3 && (grid[floor(posX)][floor(posY + speed)])) {
    //     return false;
    // }
    // return true;
}

float Mob::speed() {
    return 0.1;
}

Mob::~Mob() {}