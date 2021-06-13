#ifndef PLAYER_H_
#define PLAYER_H_

#include "rps_game.h"

class Player{
private:
    int player_choice_;
public:
    Player();
    void MakeChoice();
    int GetChoice();
};

#endif