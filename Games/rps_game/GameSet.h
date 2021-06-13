#ifndef _GAMESET_H_
#define _GAMESET_H_

#include "Player.h"
#include "Computer.h"

enum WhoWins{
    NO_MATCH,
    PLAYER_WIN,
    COMPUTER_WIN,
    DRAW
};

class GameSet{
private:
    Player player_instance_;
    Computer computer_instance_;
    WhoWins result_;
public:
    GameSet();
    ~GameSet();
    void GameField();
    void SetResult();
    void PrintResult();
    Choices ReferPlayerChoice();
    Choices ReferComputerChoice();
};

#endif