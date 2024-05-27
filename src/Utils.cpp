//
// Created by keirahopkins on 5/27/24.
//

#include "Utils.h"
#include <iostream>

void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}
