#include"../header/Team.h"

/*
private variables
string College;
string Mascot;
int CollegeID;
Offense TeamOffense;
Defense TeamDefense;
*/

Team::Team(){
    std::cout << "Go Tigers" << std::endl;
}
Team::~Team(){
    std::cout << "We want Bama" << std::endl;
}
void Team::SetOffsense(Offense PassIN){
    this->TeamOffense = PassIN;
}
void Team::SetDefense(Defense PassIN){
    this->TeamDefense = PassIN;
}
void Team::SetCollge(string PassINCollege){
    this->College = PassINCollege;
}
void Team::SetMascot(string PassINCollegeMascot){
    this->Mascot = PassINCollegeMascot;
}
void Team::SetCollegeID(int PassINCollegeID){
    this->CollegeID = PassINCollegeID;
}

Offense Team::GetOffenseStats(){
    return this->TeamOffense;
}
Defense Team::GetDefenseStats(){
    return this->TeamODefense;
}
string Team::getCollege(){
    return this->College;
}
string Team::getMascot(){
    return this->Mascot;
}
int Team::SetCollegeID(){
    return this->CollegeID;
}