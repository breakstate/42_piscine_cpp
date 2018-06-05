#include "contact.class.hpp"
#include <iostream>
#include <string>


int    ft_isnumber( std::string str)
{
    int i;

    i = -1;
    while (str[++i] != '\0')
        if (!(std::isdigit(str[i])))
            return (0);
    return (1);
}

void    ft_search(int *printIndex, std::string inputIndexStr, int *inputIndex, contact contacts[8])
{
    while (contacts[++(*printIndex)].set == 1)
        contacts[*printIndex].getPreview ( *printIndex );
    std::cin.ignore();
    std::cout << "Please specify desired index (1 - 8): ";
    std::getline (std::cin, inputIndexStr);
    if (ft_isnumber(inputIndexStr))
    {
        *inputIndex = std::stoi(inputIndexStr);
        if (*inputIndex <= 8 && *inputIndex >= 1 && contacts[*inputIndex - 1].set == 1)
            contacts[*inputIndex - 1].getAttributes( *inputIndex - 1 );
    }
    else
        std::cout << "Invalid index" << std::endl;
}

void    ft_add(int *index, contact contacts[8])
{
    std::cout << std::endl;      
    if (++(*index) < 8)
        contacts[*index].setAttributes( *index );
    else
        std::cout << "No more space in phonebook!" << std::endl;
}

int     main()
{
    int     index = -1;
    int     printIndex;
    int     inputIndex;
    contact contacts[8];
    std::string inputIndexStr;
    std::string instruction = "";
    
    //enter and parse commands
    while (instruction.compare("EXIT"))
    {
        printIndex = -1;
        std::cout << "Please enter ADD, SEARCH or EXIT: ";
        std::cin >> instruction;
        if (instruction.compare("ADD") == 0)
        {
            ft_add(&index, contacts);
        }
        else if (instruction.compare("SEARCH") == 0)
        {
            ft_search(&printIndex, inputIndexStr, &inputIndex, contacts);
            /*while (contacts[++printIndex].set == 1)
                contacts[printIndex].getPreview ( printIndex );
            std::cin.ignore();
            std::cout << "Please specify desired index (1 - 8): ";
            std::getline (std::cin, inputIndexStr);
            if (ft_isnumber(inputIndexStr))
            {
                inputIndex = std::stoi(inputIndexStr);
                if (inputIndex <= 8 && inputIndex >= 1 && contacts[inputIndex - 1].set == 1)
                    contacts[inputIndex - 1].getAttributes( inputIndex - 1 );
            }
            else
                std::cout << "Invalid index" << std::endl;*/
        }
        else
            std::cout << "Please enter a valid command" << std::endl;
    }
    return 0;
}