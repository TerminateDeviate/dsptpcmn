#pragma once
#include "grid.h"
#include "player.h"

class Game {
    public:
        Game();
        Grid grid;
        Player player;
        void Draw();
        void HandleInput();
        void TurnPlayer(int direction);
        bool CanMove(float newX, float newY);
        void MovePlayer();
    private:
};