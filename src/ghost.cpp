#include "ghost.h"

// Ghost

Ghost* GhostFactory::CreateGhost(std::string type) {
    if (type == "Blinky") return new Blinky();
    if (type == "Pinky")  return new Pinky();

    return nullptr;
}

void GhostStates::SetState(Ghost* ghost, int state) {
    // Pathfinding not yet implemented, rotation state will do for now
    ghost->rot = state;
}