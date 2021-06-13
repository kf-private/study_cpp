#include <iostream>
#include "Player.h"

Player::Player(){
    player_choice_ = NOT_YET;
}

void Player::MakeChoice(){
    while(1){
        std::cout << "Make your choice! (0: Rock, 1: Paper, 2: Scissors) -> ";
        std::cin >> player_choice_;
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

int Player::GetChoice(){
    return player_choice_;
}