#include "controller.h"
int main(){


    Team* LSU = new Team();
    Offense LSUO;
    Defense LSUD;

    LSUO.SetOffense(48.4, 2502, 6024, 32, 61);
    LSUD.SetDefense(21.87);
    
    
    LSU->SetCollegeID(2019);
    LSU->SetCollge("LSU");
    LSU->SetMascot("Tigers");
    LSU->SetOffsense(LSUO);
    LSU->SetDefense(LSUD);
    
    log(LSU);
    logOffense(LSUO);
    delete LSU;
    return 0;
}