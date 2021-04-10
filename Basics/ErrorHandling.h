#pragma once
//Overview of C++ Error handling.
#include <iostream>

enum Errors {
    ValueOutOfBounds,
    ValueNotFound,


};

void ErrorHandlingDemo(){
    try {
        int a = 2;
        int b = 1;

        if (a > b) {
            throw(Errors::ValueOutOfBounds);
        }
        if (b != 0) {
            throw(Errors::ValueNotFound);
        }
    }
    catch (Errors error) {
        std::cout << "Error: " << error << std::endl;
    }
}