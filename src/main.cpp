#include <raylib.h>
#include "game.h"

int main() {
    Color red = {204, 36, 29, 255};
    Color green = {152, 151, 26, 255};
    Color yellow = {215, 153, 33, 255};
    Color blue = {69, 133, 136, 255};
    Color purple = {177, 98, 134, 255};
    Color aqua = {104, 157, 106, 255};
    Color gray = {146, 131, 116, 255};

    Color light_red = {251, 73, 52, 255};
    Color light_green = {184, 187, 38, 255};
    Color light_yellow = {250, 189, 47, 255};
    Color light_blue = {131, 165, 152, 255};
    Color light_purple = {211, 134, 155, 255};
    Color light_aqua = {142, 192, 124, 255};
    Color light_gray = {168, 153, 132, 255};

    Color orange = {214, 93, 14, 255};
    Color bright_orange = {254, 128, 25, 255};

    Color bg0 = {40, 40, 40, 255};
    Color bg0_h = {29, 32, 33, 255};
    Color bg0_s = {50, 48, 47, 255};
    Color bg1 = {60, 56, 54, 255};
    Color bg2 = {80, 73, 69, 255};
    Color bg3 = {102, 96, 84, 255};
    Color bg4 = {124, 102, 100, 255};

    Color fg0 = {251, 241, 199, 255};
    Color fg1 = {235, 219, 178, 255};
    Color fg2 = {213, 196, 161, 255};
    Color fg3 = {189, 174, 147, 255};
    Color fg4 = {168, 153, 132, 255};

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