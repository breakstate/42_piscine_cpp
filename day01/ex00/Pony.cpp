#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony( std::string p1, int p2, int p3 ) : colour(p1), wins(p2), gender(p3) {
    std::cout << "Pony is created!" << std::endl;
    std::cout << "Colour: " << this->colour << std::endl;
    std::cout << "Competition Wins: " << this->wins << std::endl;
    if (gender == 1)
        std::cout << "Gender: male" << std::endl;
    else
        std::cout << "Gender: female" << std::endl;
    return;
}

Pony::~Pony( void ){
    std::cout << "Pony is destroyed!" << std::endl;
}