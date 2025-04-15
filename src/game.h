#pragma once
#include "grid.h"
#include "player.h"
#include "ghost.h"

class Game {
    public:
        Game();
        Grid grid;
        Player player;
        void Update();
        void Draw();
        void Die();
        void HandleInput();
        void CreateGhosts();
        std::vector<Ghost> ghosts;
        std::vector<Ghost> GetAllGhosts();

        Ghost* blinky;
        Ghost* pinky;
        ~Game();
    private:
};