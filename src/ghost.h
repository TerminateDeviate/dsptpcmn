#pragma once
#include "mob.h"
#include <vector>
#include <raylib.h>
#include <string>

class Ghost : public Mob{
    public:
    Ghost(int initPosX, int initPosY, int initRot, int initColour){
        posX = initPosX;
        posY = initPosY;
        rot = initColour;
        colour = initColour;
    }
};

class Blinky : public Ghost { 
    public:
    Blinky() : Ghost(26, 1, 0, 4) {
        // icl ts pmo sm rn gng
    }
};

class Pinky : public Ghost { 
    public:
    Pinky() : Ghost(26, 3, 0, 5) {
        // sigma sigma on the wall, who's the skibidiest of them all
    }
};

class GhostFactory {
    public:
    static Ghost* CreateGhost(std::string type) {
        if (type == "Blinky") return new Blinky();
        if (type == "Pinky")  return new Pinky();
        return nullptr;
    }
};