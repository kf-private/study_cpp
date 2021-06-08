#include <iostream>
#include <string>
#include "./rpc_game/Player.h"
#include "./rpc_game/Computer.h"
#include "./rpc_game/GameSet.h"

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