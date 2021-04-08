#include "Functions.h"

void FunctionsDemo() {
    std::cout << "Bool To Int conversion: " << BoolToInt(false) << std::endl;

    int a = 7;
    int b = 4;
    std::cout << "AddValues (int) : " << AddValues(a, b) << std::endl;

    float c = 1.22474487139f;
    float d = 3.39f;
    std::cout << "AddValues (float) : " << AddValues(c, d) << std::endl;


    int PassByValue = 5;
    OutputByValue(PassByValue);
    std::cout << "New Base Value : " << PassByValue << std::endl;

    int PassByReference = -8;
    OutputByReference(PassByReference);
    std::cout << "New Base Value : " << PassByReference << std::endl;
}