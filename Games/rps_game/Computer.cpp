#include <iostream>
#include "Computer.h"
#include <random>

Computer::Computer(){
    computer_choice_ = NOT_YET;
}

void Computer::SetChoice(){
    std::cout << "Computer is making a choice";
    std::random_device rnd;
    computer_choice_ = rnd() % 3;
    for(int i = 0; i < 4000000; i++){
        if((i % 1000000) == 0){
            std::cout << " .";
        }
    }
    std::cout << std::endl;
}

int Computer::GetChoice(){
    return computer_choice_;
}