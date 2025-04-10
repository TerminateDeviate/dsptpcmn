#include "grid.h"
#include "colours.h"
#include <iostream>

Grid::Grid() {
    numRows = 31;
    numCols = 28;
    cellSize = 16;
    Initialise();
    colours = GetCellColours();
}

void Grid::Initialise() {
    // for (int row = 0; row < numRows; row++) {
    //     for (int column = 0; column < numCols; column++) {
    //         grid[row][column] = 0;
    //     }
    // }


};

void Grid::Print() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCols; column++) {
            // std::cout << grid[row][column] << " ";
        }
        // std::cout << std::endl;
    }
}

void Grid::Draw() {
    for (int row = 0; row < numRows; row++) {
        for (int column = 0; column < numCols; column++) {
            int cellValue = grid[row][column];
            DrawRectangle(column * cellSize, row * cellSize, cellSize - 1, cellSize - 1, colours[cellValue]);
        }
    }
}