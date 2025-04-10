#include "colours.h"
#include <vector>

const Color red = {204, 36, 29, 255}; 
const Color green = {152, 151, 26, 255}; 
const Color yellow = {215, 153, 33, 255}; 
const Color blue = {69, 133, 136, 255}; 
const Color purple = {177, 98, 134, 255}; 
const Color aqua = {104, 157, 106, 255}; 
const Color gray = {146, 131, 116, 255}; 

const Color light_red = {251, 73, 52, 255}; 
const Color light_green = {184, 187, 38, 255}; 
const Color light_yellow = {250, 189, 47, 255}; 
const Color light_blue = {131, 165, 152, 255}; 
const Color light_purple = {211, 134, 155, 255}; 
const Color light_aqua = {142, 192, 124, 255}; 
const Color light_gray = {168, 153, 132, 255}; 

const Color orange = {214, 93, 14, 255}; 
const Color bright_orange = {254, 128, 25, 255}; 

const Color bg0 = {40, 40, 40, 255}; 
const Color bg0_h = {29, 32, 33, 255}; 
const Color bg0_s = {50, 48, 47, 255}; 
const Color bg1 = {60, 56, 54, 255}; 
const Color bg2 = {80, 73, 69, 255}; 
const Color bg3 = {102, 96, 84, 255}; 
const Color bg4 = {124, 102, 100, 255}; 

const Color fg0 = {251, 241, 199, 255}; 
const Color fg1 = {235, 219, 178, 255}; 
const Color fg2 = {213, 196, 161, 255}; 
const Color fg3 = {189, 174, 147, 255}; 
const Color fg4 = {168, 153, 132, 255}; 

std::vector<Color> GetCellColours() {
    return {bg0, bg2, blue, yellow, red, purple, purple, aqua, blue};
}