#include "Defense.h"

void Defense::SetDefense(float PAG){

    this->PointsAllowedPerGame = PAG;
}

float Defense::getDefense(){

    return this->PointsAllowedPerGame;
}