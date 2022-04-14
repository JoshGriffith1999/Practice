#include "Team.h"

/*
private variables
string College;
string Mascot;
int CollegeID;
Offense TeamOffense;
Defense TeamDefense;
*/

/*
Basic Defualt Contructor, does nothing except print off message
*/
Team::Team(){
    std::cout << "Go Tigers" << std::endl;
}

Team::~Team(){
    std::cout << "We want Bama" << std::endl;
}

//These setters are here just in case something would need to change down the line
void Team::SetOffsense(Offense PassIN){
    this->TeamOffense = PassIN;
}
void Team::SetDefense(Defense PassIN){
    this->TeamDefense = PassIN;
}
void Team::SetCollge(std::string PassINCollege){
    this->College = PassINCollege;
}
void Team::SetMascot(std::string PassINCollegeMascot){
    this->Mascot = PassINCollegeMascot;
}
void Team::SetCollegeID(int PassINCollegeID){
    this->CollegeID = PassINCollegeID;
}

//These getters are here so we can get data about the school
Offense Team::GetOffenseStats(){
    return this->TeamOffense;
}
Defense Team::GetDefenseStats(){
    return this->TeamDefense;
}
std::string Team::getCollege(){
    return this->College;
}
std::string Team::getMascot(){
    return this->Mascot;
}
int Team::SetCollegeID(){
    return this->CollegeID;
}