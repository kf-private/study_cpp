#include <iostream>
#include "Computer.h"
#include <random>

Computer::Computer(){
    choice = -1;
}

void Computer::set_choice(){
    std::cout << "Computer is making a choice";
    std::random_device rnd;
    choice = rnd() % 3;
    for(int i = 0; i < 40000; i++){
        if((i % 10000) == 0){
            std::cout << " .";
        }
    }
    std::cout << std::endl;
}

int Computer::get_choice(){
    return choice;
}