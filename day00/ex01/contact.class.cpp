#include "contact.class.hpp"
#include <iostream>
#include <string>

contact::contact( void ){
    //std::cout << "constructor called" << std::endl;
    set = 0;
}

contact::~contact( void ){
    //std::cout << "destructor called" << std::endl;
}

void    contact::setAttributes( int index ){
    if (index <= 8){
        std::cin.ignore();
        std::cout << "Enter first name: ";
        std::getline (std::cin, this->firstName);
        std::cout << "Enter last name: ";
        std::getline (std::cin, this->lastName);        
        std::cout << "Enter nickname: ";
        std::getline (std::cin, this->nickname);        
        std::cout << "Enter login: ";
        std::getline (std::cin, this->login);        
        std::cout << "Enter postal address: ";
        std::getline (std::cin, this->postalAddress);        
        std::cout << "Enter email address: ";
        std::getline (std::cin, this->emailAddress);        
        std::cout << "Enter phone number: ";
        std::getline (std::cin, this->phoneNumber);        
        std::cout << "Enter birthday(dd/mm/yyyy): ";
        std::getline (std::cin, this->birthday);        
        std::cout << "Enter favourite meal: ";
        std::getline (std::cin, this->favouriteMeal);        
        std::cout << "Enter underwear colour: ";
        std::getline (std::cin, this->underwearColour);        
        std::cout << "Enter your darkest secret: ";
        std::getline (std::cin, this->darkestSecret);
        std::cout << std::endl;      
        this->set = 1;
        return;
    }
}

void    contact::getAttributes( int index ) const {
    if (index <= 8){
        std::cout << "First name: " << this->firstName << std::endl;
        std::cout << "Last name: " << this->lastName << std::endl;
        std::cout << "Nickname: " << this->nickname << std::endl;
        std::cout << "Login: " << this->login << std::endl;
        std::cout << "Postal address: " << this->postalAddress << std::endl;
        std::cout << "Email address: " << this->emailAddress << std::endl;
        std::cout << "Phone number: " << this->phoneNumber << std::endl;
        std::cout << "Birthday: " << this->birthday << std::endl;
        std::cout << "Favourite meal: " << this->favouriteMeal << std::endl;
        std::cout << "Underwear colour: " << this->underwearColour << std::endl;
        std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
        return;
    }
}

std::string contact::truncate( std::string str )
{
    std::string spaces = "";
    int len;
    len = str.length();

    if (len > 10)
        return str.substr(0, 9) + ".";
    else
    {
        while (len++ < 10)
            spaces = spaces + " ";
        return spaces + str;
    }
}

void    contact::getPreview( int index ) {
    std::cout << "         " << index + 1 << "|";
    std::cout << this->truncate( this->firstName ) << "|";
    std::cout << this->truncate( this->lastName ) << "|";
    std::cout << this->truncate( this->nickname ) << "|" << std::endl;
}