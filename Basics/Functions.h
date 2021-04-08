#pragma once
// A basic description of Function implementation in C++.
#include <iostream>
// Function Signature Syntax:
// [Return Type] Name ([Parameters]);
bool Invalidate(bool validation) {
    validation = !validation;
    return validation;
};

//Overloads
//Functions in C++ can be Overloaded - meaning that they can have different signatures.

//Adds together two Integer values.
int AddValues(int valueA, int valueB) {
    return(valueA + valueB);
};

//Overload for AddValues. Adds together two Floating point values. 
float AddValues(float valueA, float valueB) {
    return(valueA + valueB);
}

// Pass by Value vs Pass by Reference
// Pass by Value effectively copies the base value, so the original is not modified. 
void OutputByValue(int value) {
    std::cout << "Base Value : " << value << std::endl;
    value += 10;
    std::cout << "Function Value :" << value << std::endl;
}

// Pass by Reference gives access to the actual value - so we can edit it permanently. This is denoted by an & after the data type.
void OutputByReference(int& value) {
    std::cout << "Base Value : " << value << std::endl;
    value += 17;
    std::cout << "Function Value :" << value << std::endl;
}