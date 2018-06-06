#include "Pony.hpp"
#include <iostream>
#include <string>

void    ponyOnTheHeap()
{
    Pony *heapPony = new Pony("red", 4, 0);
    delete heapPony;
    return;
}

void    ponyOnTheStack()
{
    Pony stackPony = Pony("blue", 2, 1);
    return;
}

int main()
{
    std::cout << std::endl;    
    std::cout << "calling PonyOnTheStack():" << std::endl;
    ponyOnTheStack();
    std::cout << "exited PonyOnTheStack():" << std::endl; 

    std::cout << std::endl;

    std::cout << "calling PonyOnTheHeap():" << std::endl;            
    ponyOnTheHeap();
    std::cout << "exited PonyOnTheHeap():" << std::endl;            
    std::cout << std::endl;
    
    return (0);
}