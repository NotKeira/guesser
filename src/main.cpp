//
// Created by keirahopkins on 5/27/24.
//

#include "main.h"
#include "Game.h"
#include <iostream>

int main() {
    int maxNumber;

    std::cout << "Enter the maximum number for the guessing range: ";
    std::cin >> maxNumber;

    Game game(maxNumber);
    game.play();

    return 0;
}