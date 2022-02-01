#pragma once

#include<iostream>
#include <string.h>
#include"ArchType.hpp"
using namespace std;

class Person : ArchType{

    public:
    Person();
    ~Person();
    string CharacterName;
    ArchType CharacterArchType;
    int Health;
    int AttackDamage;
    int MagicDamage;
    int Defense;
    int MagicResistance;
    int ManaPool;    
    int potionsLeft = 5;
    int potionHealthIncrease = 15;


//////// Setter Function ///////////////////////////
    void setCharacterName(string name);
    void setHealth(int Health);
    void setAttackDaamge(int AttackDamage);
    void setMagicDamage(int MagicDamage);
    void setDefense(int Defense);
    void setMagicResistance(int MagicResistance);
    void setManaPool(int ManaPool);

/////// Getter Functions /////////////////////////
    string getCharacterName();
    int getHealth();
    int getAttackDamge();
    int getMagicDamage();
    int getDefense();
    int getMagicResistance();
    int getManaPool();

//////// Actions - Public///////////////////////////
    void usePotion();

    private:
//////// Actions - Private ////////////////////////
    void p_usePotion();

};