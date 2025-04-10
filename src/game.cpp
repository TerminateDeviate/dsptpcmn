#include "game.h"
#include "ghost.h"
#include <raylib.h>
#include <math.h>

Game::Game() {
    grid = Grid();
    player.posX = 1;
    player.posY = 1;
    player.colour = 3;
}

void Game::Update() {
    HandleInput();
    player.Move(player.rot);
}

void Game::Draw() {
    grid.Draw();
    player.Draw();
    blinky.Draw();
    pinky.Draw();
}

void Game::HandleInput() {
    int keyPressed = GetKeyPressed();
    switch (keyPressed) {
        case KEY_UP:
            player.Rotate(1);
            break;

        case KEY_RIGHT:
            player.Rotate(2);
            break;
        
        case KEY_DOWN:
            player.Rotate(3);
            break;
        
        case KEY_LEFT:
            player.Rotate(4);
            break;
    }  
}