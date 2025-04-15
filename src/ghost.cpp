#include "ghost.h"

// Ghost

Ghost* GhostFactory::CreateGhost(std::string type) {
    if (type == "Blinky") return new Blinky();
    if (type == "Pinky")  return new Pinky();

    return nullptr;
}