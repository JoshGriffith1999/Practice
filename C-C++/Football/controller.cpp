#include "controller.h"

void log(){
    std::cout << "hello world" << std::endl;
}

void log(Team* school){

    std::cout << school->getCollege() + ' ' + school->getMascot() << std::endl;
}