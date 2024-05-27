//
// Created by keirahopkins on 5/27/24.
//

#include "Game.h"
#include "Utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Game::Game(int maxNumber) : maxNumber(maxNumber) {
    std::srand(std::time(nullptr));
}

void Game::play() {
    outputWelcome();
    int numberToGuess = generateRandomNumber();
    int guess;

    do {
        guess = getGuessFromUser();
        outputResult(guess, numberToGuess);
    } while (guess != numberToGuess);

    std::cout << "Congratulations! You guessed the correct number!" << std::endl;
}

int Game::generateRandomNumber() const {
    return std::rand() % maxNumber + 1;
}

int Game::getGuessFromUser() {
    int guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    return guess;
}

void Game::outputWelcome() const {
    std::cout << "Welcome :D" << std::endl;
    std::cout << "I have selected a number between 1 and " << maxNumber << "." << std::endl;
}


void Game::outputResult(int guess, int number) {
    if (guess < number) {
        std::cout << "Tow low!" << std::endl;
    } else if (guess > number) {
        std::cout << "Too high!" << std::endl;
    }
}