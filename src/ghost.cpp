#include "ghost.h"

Ghost* GhostFactory::CreateGhost(std::string type) {
    if (type == "blinky") return new Blinky();
    if (type == "pinky")  return new Pinky();
    // if (type == "inky")   return new Inky();
    // if (type == "clyde")  return new Clyde();
    return nullptr;
}