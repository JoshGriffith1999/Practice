#ifndef __Team__
#define __Team__
#include <iostream>
#include <string>
#include "Offsense.h"
#include "Defense.h"

class Team{
    public:
        Team();
        ~Team();
        
        void SetOffsense(Offense);
        void SetDefense(Defense);
        void SetCollge(std::string);
        void SetMascot(std::string);
        void SetCollegeID(int);

        Offense GetOffenseStats();
        Defense GetDefenseStats();
        std::string getCollege();
        std::string getMascot();
        int SetCollegeID();
    
    private:
    
        std::string College;
        std::string Mascot;
        int CollegeID;
        Offense TeamOffense;
        Defense TeamDefense;
};

#endif