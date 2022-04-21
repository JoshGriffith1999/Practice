#include "Offsense.h"
/*
float PointsPerGame;
int rushingYards;
int recievingYards;
int rushingTDs;
int recievingTDs;
*/
void Offense::SetOffense(float PPG, int rushingYards, int recievingYards, int rushingTDs, int recievingTDs){
    this->PointsPerGame = PPG;
    this->rushingYards = rushingYards;
    this->recievingYards = recievingYards;
    this->rushingTDs = rushingTDs;
    this->recievingTDs = recievingTDs;
}

void Offense::setPPG(float PointsPerGame){
    this->PointsPerGame = PointsPerGame;
}
void Offense::setRushingYards(int rushingYards){
    this->rushingYards = rushingYards;

}
void Offense::setRushingTDs(int rushingTDs){
    this->recievingYards = recievingYards;
}
void Offense::setRecievingYards(int recievingYards){
    this->rushingTDs = rushingTDs;
}
void Offense::setRecievingTDs(int recievingTDs){
    this->recievingTDs = recievingTDs;
}

float Offense::getPPG(){

    return this->PointsPerGame;
}

int Offense::getRushingYards(){
    return this->rushingYards;
}
int Offense::getRushingTDs(){
    return this->rushingTDs;
}
int Offense::getRecievingYards(){
    return this->rushingTDs;
}
int Offense::getRecievingTDs(){
    return this->recievingTDs;
}