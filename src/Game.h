//
// Created by keirahopkins on 5/27/24.
//

#ifndef GUESS_ME_GAME_H
#define GUESS_ME_GAME_H


class Game {
public:
    Game(int maxNumber);

    void play();

private:
    int maxNumber;

    int generateRandomNumber() const;

    static int getGuessFromUser();

    void outputWelcome() const;

    static void outputResult(int guess, int number);
};


#endif //GUESS_ME_GAME_H
