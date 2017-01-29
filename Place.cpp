//
// Created by ananth on 1/28/17.
//

#include "Place.h"

const int BOARD_WIDTH = 100;
const int BOARD_HEIGHT = 100;
const int PLOT_TYPE = 0;

class Place {
public:

    // Returns: 0 for beginning, 1 for middle, 2 for end
    int getPlotType() {

        return this->plotType;
    }

    // TODO: Parse JSON to get random exit
    Place getRandomExit() {

    }

private:
    int gameBoard[BOARD_WIDTH][BOARD_HEIGHT];
    int plotType = PLOT_TYPE;
    int hi = 0;
};