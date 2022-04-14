#include "controller.h"
int main(){


    Team* LSU = new Team();
    LSU->SetCollegeID(2019);
    LSU->SetCollge("LSU");
    LSU->SetMascot("Tigers");
    log(LSU);

    delete LSU;
    return 0;
}