#include <stdio.h>
#include <iostream>
using namespace std;
#include "game.h"

// Returns 1 if in win state, 0 otherwise. TODO: Make win condition, change Player type
int check_win_state(int player) {
    return 1;
}

// REPL Loop for proecessing user input
int read_eval_print_loop() {
    while(true) {
        if (check_win_state(0)) {  // TODO: change Player type
            return 0;
        }

        // Do game
    }
}



// Start Game
int main() {
    read_eval_print_loop();
}


// GamePlay Variables

#define WINDOW_WIDTH = 1000
#define WINDOW_HEIGHT = 1000

const int BOARD_WIDTH = 100;
const int BOARD_HEIGHT = 100;

class Game {

private:
    int gameBoard[BOARD_WIDTH][BOARD_HEIGHT];
};