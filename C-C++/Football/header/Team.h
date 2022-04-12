#ifndef __Team__
#define __Team__
#include<iostream>
#include<string>


class Team{

    Team();
    ~Team();

    private:
    string College;
    string Mascot;
    int CollegeID;
    Offense TeamOffense;
    Defense TeamDefense;

    public:
    void SetOffsense(Offense);
    void SetDefense(Defense);
    void SetCollge(int);
    void SetMascot(int);
    void SetCollegeID(int);

    Offense GetOffenseStats();
    Defense GetDefenseStats();
    string getCollege();
    string getMascot();
    int SetCollegeID();
};

#endif