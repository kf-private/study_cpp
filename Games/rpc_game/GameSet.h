#ifndef _GAMESET_H_
#define _GAMESET_H_

#include "Player.h"
#include "Computer.h"

class GameSet{
private:
    int WhoWins;
public:
    GameSet();
    ~GameSet();
    void GameField(Player&, Computer&);
    int JudgeWhoWins(Player, Computer);
    void PrintResult(int);
};

#endif