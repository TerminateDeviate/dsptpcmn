#pragma once
#include "mob.h"
#include <vector>
#include <raylib.h>
#include <string>
#include <iostream>

class Ghost : public Mob{
    public:
    Ghost() {
        posX = 0;
        posY = 0;
        rot = 0;
        colour = 0;
    } 

    Ghost(int initPosX, int initPosY, int initRot, int initColour){
        posX = initPosX;
        posY = initPosY;
        rot = initRot;
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
    static Ghost* CreateGhost(std::string type);
};

class GhostStates {
    public:
    static void SetState(Ghost* ghost, int state);
};

// DECORATORS

class GhostDecorator : public Ghost {
    protected:
    Ghost* ghostWrapped;

    public:
    GhostDecorator(Ghost* ghost) {
        ghostWrapped = ghost;
    }

    float speed() override {
        return ghostWrapped->speed(); 
    }

    virtual ~GhostDecorator() {
        delete ghostWrapped;
    }
};

class DoubleSpeedDecorator : public GhostDecorator{
    public:
    DoubleSpeedDecorator(Ghost* ghost)
        : GhostDecorator(ghost)
    {}

    float speed() override {
        // std::cout << "FUCKFUCKFUCKFUCKAUOGAWIOUJEFOIAWJOFJ" << std::endl;
        return ghostWrapped->speed() * 2; 
    }
};