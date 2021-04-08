// C++ Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Basics/Functions.h"
#include <iostream>
#include "Basics/Classes.h"

int main()
{
    std::cout << "Bool To Int conversion: " << BoolToInt(false) << std::endl;

    int a = 7;
    int b = 4;
    std::cout << "AddValues (int) : " << AddValues(a, b) << std::endl;

    float c = 1.22474487139;
    float d = 3.39;
    std::cout << "AddValues (float) : " << AddValues(c, d) << std::endl;


    int PassByValue = 5;
    OutputByValue(PassByValue);
    std::cout << "New Base Value : " << PassByValue << std::endl;

    int PassByReference = -8;
    OutputByReference(PassByReference);
    std::cout << "New Base Value : " << PassByReference << std::endl;

    Animal cow("Bessie", 14, false);
    cow.Feed();

    Dog leo("Leo", 5, true);
    leo.Feed();
    leo.Sit();
    leo.Speak();
}

