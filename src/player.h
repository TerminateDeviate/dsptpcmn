#pragma once
#include <vector>
#include <raylib.h>

class Player {
    public:
        Player();
        void Draw();
        void Initialise();
        void Move();
        void Turn();
        float posX;
        float posY;
        int facing;
    private:
        std::vector<Color> colours;
};