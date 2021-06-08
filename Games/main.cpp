#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
#include "GameSet.h"

enum Choices{
    ROCK,
    PAPER,
    SCISSORS,
};

int main(){
    GameSet game;
    Player player;
    Computer computer;
    game.GameField(player, computer);
}