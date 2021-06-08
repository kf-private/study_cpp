#include <iostream>
#include "GameSet.h"
#include "Player.h"
#include "Computer.h"

GameSet::GameSet(){
    WhoWins = -1;
    std::cout << "Let's play the rock-paper-scissors!" << std::endl;
}

GameSet::~GameSet(){
    std::cout << "Thank you for playing with us!" << std::endl;
}

int GameSet::JudgeWhoWins(Player player, Computer computer){
    if(player.get_choice() == computer.get_choice()){
        return 0;
        std::cout << "Draw!" << std::endl;
    }
    else if(((player.get_choice() + 1) % 3) == computer.get_choice()){
        return -1;
    }
    else{
        return 1;
    }
}

void GameSet::PrintResult(int WhoWins){
    switch(WhoWins){
        case 0:
            std::cout << "Draw!" << std::endl;
            break;
        
        case 1:
            std::cout << "Congrats! You win!!!" << std::endl;
            break;

        case -1:
            std::cout << "You lose..." << std::endl;
            break;
    }
}

void GameSet::GameField(Player& player, Computer& computer){
    while(1){
        player.make_choice();
        computer.set_choice();
        WhoWins = JudgeWhoWins(player, computer);
        PrintResult(WhoWins);
        if(WhoWins != 0){
            break;
        }
    }
}
