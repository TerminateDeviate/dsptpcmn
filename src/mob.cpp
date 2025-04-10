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
    speed = 0.1;
    rot = 0;
    queuedRot = 0;
}

void Mob::Draw() {
    // TODO: UNHARDCODE WITH CELL SIZE VARIABLE
    DrawRectangle(posX * 16, posY * 16, 16 - 1, 16 - 1, colours[colour]);
}

void Mob::Move(int rot) {
    switch (rot) {
        case 1: posY -= speed; break;
        case 2: posX += speed; break;
        case 3: posY += speed; break;
        case 4: posX -= speed; break;
    }
}

void Mob::Rotate(int newRot) {
    // queuedRot = newRot;
    // if (CanMove(rot)) {
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