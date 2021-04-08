// A basic description of Function implementation in C++.
#pragma once
#include <iostream>

//Function Comment Template:
// Description of the Function's Purpose
// Precondition: What has to happen in order for this function to be called?
// Parameters:  ParamA - Does Something. (Brief description on its function)
//              ParamB - Does Something Else. 
// Return:      If the function returns something, what does it return?
// Postcondition: What is the state of the program after the function has been called?

// Converts a boolean value to an Integer of either 1 or 0. 
// Parameters:  val - the value to be converted.
// Return:      an Integer of either a 1 (if true), or 0 (if false).
inline int BoolToInt(bool val) {
    if (val == true)
        return(1);
    else
        return(0);
}


// Function Signature Syntax:
// [Return Type] Name ([Parameters]);
inline bool Invalidate(bool validation) {
    validation = !validation;
    return validation;
};

//Overloads
//Functions in C++ can be Overloaded - meaning that they can have different signatures.

//Adds together two Integer values.
inline int AddValues(int valueA, int valueB) {
    return(valueA + valueB);
};

//Overload for AddValues. Adds together two Floating point values. 
inline float AddValues(float valueA, float valueB) {
    return(valueA + valueB);
}

// Pass by Value vs Pass by Reference
// Pass by Value effectively copies the base value, so the original is not modified. 
inline void OutputByValue(int value) {
    std::cout << "Base Value : " << value << std::endl;
    value += 10;
    std::cout << "Function Value :" << value << std::endl;
}


// Pass by Reference gives access to the actual value - so we can edit it permanently. This is denoted by an & after the data type.
inline void OutputByReference(int& value) {
    std::cout << "Base Value : " << value << std::endl;
    value += 17;
    std::cout << "Function Value :" << value << std::endl;
}

//Demo of Functions
void FunctionsDemo();
    