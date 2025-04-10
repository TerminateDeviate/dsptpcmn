#pragma once
#include "grid.h"
#include "player.h"
#include "ghost.h"

class Game {
    public:
        Game();
        Grid grid;
        Player player;
        Blinky blinky;
        Pinky pinky;
        void Update();
        void Draw();
        void HandleInput();
        std::vector<Ghost*> ghosts;
    private:
};