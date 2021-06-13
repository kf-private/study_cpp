#include <iostream>
#include "Player.h"

Player::Player(){
    player_choice_ = NOT_YET;
}

void Player::MakeChoice(){
    while(1){
        std::cout << "Make your choice! (0: Rock, 1: Paper, 2: Scissors) -> ";
        int player_choice = 0;
        std::cin >> player_choice;
        switch(player_choice){
            case 1:
                player_choice_ =  ROCK;
                break;
            case 2:
                player_choice_ = PAPER;
                break;
            case 3:
                player_choice_ = SCISSORS;
                break;
            default:
                break;
        }
        std::cout << std::endl;
        if(player_choice_ < 1 && player_choice_ > 3){
            std::cout << "Sorry, your choice is unacceptable..." << std::endl;
            std::cout << "Try another choice!" << std::endl;
        }
        else{
            break;
        }
        rewind(stdin);
    }    
}

Choices Player::GetChoice(){
    return player_choice_;
}