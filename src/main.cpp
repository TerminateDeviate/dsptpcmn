#include <raylib.h>
#include "game.h"
#include "colours.h"

int main() {

    SetTargetFPS(30);
    InitWindow(448, 576, "Skibidi");

    Game game = Game();

    while (WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(bg0);
        game.Draw();
        game.HandleInput();

        EndDrawing();
    }
    CloseWindow();
}