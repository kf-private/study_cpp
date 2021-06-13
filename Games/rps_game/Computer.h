#ifndef _COMPUTER_H_
#define _COMPUTER_H_

#include "rps_game.h"

class Computer{
private:
    int computer_choice_;
public:
    Computer();
    int GetChoice();
    void SetChoice();
};

#endif