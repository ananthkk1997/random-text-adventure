//
// Created by Christian on 1/29/2017.
//

#ifndef RANDOM_TEXT_ADVENTURE_PLAYER_H
#define RANDOM_TEXT_ADVENTURE_PLAYER_H


class Player {
public:
    const int initPlayerPosition=0;
    int PlayerHealth;
    int currPlayerPosition;
    bool isAlive=true;

    int resetPlayerPosition(){
    currPlayerPosition=0;
    }
    int PlayerDeath(){
        if (PlayerHealth=0){
            isAlive=false;
            return isAlive;
        }
    }
};


#endif //RANDOM_TEXT_ADVENTURE_PLAYER_H
