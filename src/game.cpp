#include "game.h"
#include "ghost.h"
#include <raylib.h>
#include <math.h>
#include <memory>
#include <iostream>

Game::Game() {
    grid = Grid();
    player.posX = 1;
    player.posY = 1;
    player.colour = 3;

    blinky = GhostFactory::CreateGhost("Blinky");
    pinky  = GhostFactory::CreateGhost("Pinky");

    // blinky->rot = 4;
}

void Game::Update() {
    HandleInput();
    player.Move(player.rot);
    blinky->Move(blinky->rot);
    pinky->Move(pinky->rot);
}

void Game::Draw() {
    grid.Draw();
    player.Draw();
    blinky->Draw();
    pinky->Draw();
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

        // GHOST THINGAMAJIGS
        // PATHFINDING NOT YET EXIST, ROTATION STATES WILL DO FOR NOW
        case KEY_W:
            GhostStates::SetState(blinky, 1);
            break;
        case KEY_D:
            GhostStates::SetState(blinky, 2);
            break;
        case KEY_S:
            GhostStates::SetState(blinky, 3);
            break;
        case KEY_A:
            GhostStates::SetState(blinky, 4);
            break;

        // DECORATOR PATTERN DEMONSTRATION
        case KEY_SPACE:
            // std::cout << "sigma sigma on the wall whos the skibidiest of them all" << std::endl;
            blinky = new DoubleSpeedDecorator(blinky);
            break;
    }  
}      

Game::~Game() {
    delete blinky;
    delete pinky;
}