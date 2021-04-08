#pragma once
#include <string>
#include <iostream>

// Classes and Structs are custom data types, essential to object-oriented programming. 
//      Class members are Private by default.
//      Struct members are Public by default.

//An example class, representing an animal.
//Parameters:   name - the animal's name
//              age - how old the animal is
//              isFed - whether the animal has been fed or not
class Animal {
    std::string name;
    int age;
    bool isFed;

public:
    //Constructor - this method is called when an instance of this class is created.
    Animal(std::string c_Name, int c_Age, bool c_isFed)
        : name(c_Name), age(c_Age), isFed(c_isFed) {
        std::cout << "Constructed a new member of the Animal class\t\nname: " << name << "\t\nage: " << age << "\t\nisFed: " << isFed << std::endl;
    };

    //"feeds" the animal, setting isFed to true if it's not already true.
    void Feed() {

        if (isFed) {
        std::cout << "Error: " << name << " has already been fed!";
        }

        else {
            isFed = true;
            std::cout << "Fed " << name << "!";
        }
    }


};