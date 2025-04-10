#pragma once
#include <vector>
#include <raylib.h>

class Mob {
public:
    Mob();
    void Draw();
    void Initialise();
    void Move(int rot);
    void Rotate(int rot);
    bool CanMove(int rot, int grid[31][28]);
    float posX;
    float posY;
    float speed;
    int rot;
    int queuedRot;
    int colour;
private:
    std::vector<Color> colours;
};
