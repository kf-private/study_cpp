#include <iostream>
#include "GameSet.h"
#include "Player.h"
#include "Computer.h"

GameSet::GameSet(){
    result_= NO_MATCH;
    std::cout << "Let's play the rock-paper-scissors!" << std::endl;
}

GameSet::~GameSet(){
    std::cout << "Thank you for playing with us!" << std::endl;
}

void GameSet::SetResult(){
    if(ReferPlayerChoice() == ReferComputerChoice()){
        result_ = DRAW;
    }
    else if(((ReferPlayerChoice() + 1) % 3) == ReferComputerChoice()){
        result_ = COMPUTER_WIN;
    }
    else{
        result_ = PLAYER_WIN;
    }
}

void GameSet::PrintResult(){
    switch(result_){
        case DRAW:
            std::cout << "Draw!" << std::endl;
            break;
        
        case PLAYER_WIN:
            std::cout << "Congrats! You win!!!" << std::endl;
            break;

        case COMPUTER_WIN:
            std::cout << "You lose..." << std::endl;
            break;
    }
}

void GameSet::GameField(){
    while(1){
        player_instance_.MakeChoice();
        computer_instance_.SetChoice();
        SetResult();
        PrintResult();
        if(result_ != DRAW){
            break;
        }
        else{
            std::cout << "Make another choice!" << std::endl;
        }
    }
}

int GameSet::ReferPlayerChoice(){
    return player_instance_.GetChoice();
}

int GameSet::ReferComputerChoice(){
    return computer_instance_.GetChoice();
}