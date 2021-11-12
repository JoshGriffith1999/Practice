#include "../Header/Person.hpp"

Person::Person(){}
Person::~Person(){}
//////// Setter Function ///////////////////////////
void Person::setCharacterName(string name){

    this->CharacterName = name;
}
void Person::setHealth(int Health){

this->Health = Health;
}
void Person::setAttackDaamge(int AttackDamage){

this->AttackDamage = AttackDamage;
}
void Person::setMagicDamage(int MagicDamage){

this->MagicDamage = MagicDamage;
}
void Person::setDefense(int Defense){

this->Defense = Defense;
}
void Person::setMagicResistance(int MagicResistance){

this->MagicResistance = MagicDamage;
}
void Person::setManaPool(int ManaPool){

this->ManaPool = ManaPool;
}

/////// Getter Functions /////////////////////////
string Person::getCharacterName(){

    return this->CharacterName;
}
int Person::getHealth(){

return this->Health;
}
int Person::getAttackDamge(){

return this->AttackDamage;
}
int Person::getMagicDamage(){

return this->MagicDamage;
}
int Person::getDefense(){

return this->Defense;
}
int Person::getMagicResistance(){

return this->MagicResistance;
}
int Person::getManaPool(){

return this->ManaPool;
}

//////// Actions - Public///////////////////////////

void Person::usePotion(){}

//////// Actions - Private ////////////////////////
void p_usePotion(){}