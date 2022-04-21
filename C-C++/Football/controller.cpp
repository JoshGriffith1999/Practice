#include "controller.h"

void log(){
    std::cout << "hello world" << std::endl;
}

void log(Team* school){

    std::cout << school->getCollege() + ' ' + school->getMascot() << std::endl;
}

void logOffense(Offense O){
    std::cout << "PPG: " << O.getPPG() << std::endl;
    std::cout << "Rushing Yards: " << O.getRushingYards() << std::endl;
    std::cout << "Rushing TDs: " << O.getRushingTDs() << std::endl;
    std::cout << "Recieving Yards: " << O.getRecievingYards() << std::endl;
    std::cout << "Recieving TDs: " << O.getRecievingTDs() << std::endl; 
}