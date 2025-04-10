#include "game.h"
#include <raylib.h>
#include <math.h>

Game::Game() {
    grid = Grid();
    player = Player();
}

void Game::Draw() {
    grid.Draw();
    player.Draw();
    MovePlayer();
}

void Game::HandleInput() {
    int keyPressed = GetKeyPressed();
    switch (keyPressed) {
        case KEY_UP:
            TurnPlayer(1);
            break;

        case KEY_RIGHT:
            TurnPlayer(2);
            break;
        
        case KEY_DOWN:
            TurnPlayer(3);
            break;
        
        case KEY_LEFT:
            TurnPlayer(4);
            break;
    }
}

void Game::TurnPlayer(int direction) {
    // int queueDirection = direction;
    player.facing = direction;
}

bool Game::CanMove(float newX, float newY) {
        return (
            grid.grid[(int)ceil(newY)][(int)ceil(newX)] != 2 &&
            grid.grid[(int)floor(newY)][(int)floor(newX)] != 2
        );
}

void Game::MovePlayer() {
    float velocity = 0.1;
    float newX = player.posX;
    float newY = player.posY;

    // TODO: UNHARDCODE 31 AND 28 WITH PROPER ROW AND COLUMN SIZE
    switch (player.facing) {
        case 1: // Up
            newY -= velocity;
            if (newY < 0) newY = 31 - 1;
            break;

        case 2: // Right
            newX += velocity;
            if (newX >= 28) newX = 0;
            break;

        case 3: // Down
            newY += velocity;
            if (newY >= 31) newY = 0;
            break;

        case 4: // Left
            newX -= velocity;
            if (newX < 0) newX = 28 - 1;
            break;
    }

    // Apply movement if there's no wall
    if (CanMove(newX, newY)) {
        player.posX = newX;
        player.posY = newY;
    } else {
        // Snap player to nearest grid position
        player.posX = round(player.posX);
        player.posY = round(player.posY);
    }
}