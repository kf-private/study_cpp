#include <iostream>
#include "Player.h"

Player::Player(){
    choice = -1;
}

void Player::make_choice(){
    while(1){
        std::cout << "Make your choice! (0: Rock, 1: Paper, 2: Scissors) -> ";
        std::cin >> choice;
        std::cout << std::endl;
        if(choice < 0 && choice > 2){
            std::cout << "Sorry, your choice is unacceptable..." << std::endl;
            std::cout << "Try another choice!" << std::endl;
        }
        else{
            rewind(stdin);
            break;
        }
    }    
}

int Player::get_choice(){
    return choice;
}