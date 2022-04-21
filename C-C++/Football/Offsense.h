#ifndef __Offense__
#define __Offense__
#include <iostream>

class Offense{

    public:
    void SetOffense(float, int, int, int, int);
    
    void setPPG(float);
    void setRushingYards(int);
    void setRushingTDs(int);
    void setRecievingYards(int);
    void setRecievingTDs(int);
    
    float getPPG();
    int getRushingYards();
    int getRushingTDs();
    int getRecievingYards();
    int getRecievingTDs();

    private:
    float PointsPerGame;
    int rushingYards;
    int recievingYards;
    int rushingTDs;
    int recievingTDs;
};
#endif