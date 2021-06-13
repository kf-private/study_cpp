#ifndef _GAMESET_H_
#define _GAMESET_H_

#include "Player.h"
#include "Computer.h"

#define NO_MATCH     0
#define PLAYER_WIN   1
#define COMPUTER_WIN 2
#define DRAW         3

class GameSet{
private:
    Player player_instance_;
    Computer computer_instance_;
    int result_;
public:
    GameSet();
    ~GameSet();
    void GameField();
    void SetResult();
    void PrintResult();
    int ReferPlayerChoice();
    int ReferComputerChoice();
};

#endif