#ifndef __Team__
#define __Team__
#include<iostream>
#include<string>
#include"Offsense.h"
#include"Defense.h"

class Team{

    private:
    std::string College;
    std::string Mascot;
    int CollegeID;
    Offense TeamOffense;
    Defense TeamDefense;

    public:
    Team();
    ~Team();
    
    void SetOffsense(Offense);
    void SetDefense(Defense);
    void SetCollge(int);
    void SetMascot(int);
    void SetCollegeID(int);

    Offense GetOffenseStats();
    Defense GetDefenseStats();
    std::string getCollege();
    std::string getMascot();
    int SetCollegeID();
};

#endif