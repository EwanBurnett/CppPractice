#include "Classes.h"


void ClassesDemo() {
    Animal cow("Bessie", 14, false);
    cow.Feed();

    Dog leo("Leo", 5, true);
    leo.Feed();
    leo.Sit();
    leo.Speak();
}