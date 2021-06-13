#ifndef _COMPUTER_H_
#define _COMPUTER_H_

#include "rps_game.h"

class Computer{
private:
    Choices computer_choice_;
public:
    Computer();
    Choices GetChoice();
    void SetChoice();
};

#endif