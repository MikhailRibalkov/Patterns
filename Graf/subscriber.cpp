#include "subscriber.h"
#include <iostream>

Subscriber::Subscriber()
{

}

void Subscriber1::update(std::string message)
{
    std::cout << "Subscriber1: " << message << std::endl;
}

void Subscriber2::update(std::string message)
{
    std::cout << "Subscriber2: " << message << std::endl;
}
