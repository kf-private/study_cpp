#include <iostream>
#include "Computer.h"
#include <random>

Computer::Computer(){
    computer_choice_ = NOT_YET;
}

void Computer::SetChoice(){
    std::cout << "Computer is making a choice";
    std::random_device rnd;
    int computer_choice = rnd() % 3;
    switch(computer_choice){
            case 1:
                computer_choice_ =  ROCK;
                break;
            case 2:
                computer_choice_ = PAPER;
                break;
            case 3:
                computer_choice_ = SCISSORS;
                break;
            default:
                break;
        }
    for(int i = 0; i < 40000; i++){
        if((i % 10000) == 0){
            std::cout << " .";
        }
    }
    std::cout << std::endl;
}

Choices Computer::GetChoice(){
    return computer_choice_;