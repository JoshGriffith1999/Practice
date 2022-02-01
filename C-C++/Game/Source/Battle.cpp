#include<iostream>
#include "../Header/Battle.hpp"
#include "../Header/Person.hpp"

/*
void Battle(Person &Attacker, Person &Defender, int AOM): Handles all of the attacking between two entities
@Person Attacker: Entity that is doing the attacking
@Person Defender: Entity that is doing the defending
@int AOM(Attack or Magic): 1 = Physical attack, 2 = Magic attack
*/
void Battle(Person &Attacker, Person &Defender, int AOM){

    if(AOM == 1){
        int health = Defender.getHealth();
        health -= (Defender.getDefense() - Attacker.getAttackDamge());
        Defender.setHealth(health);

        std::cout <<  Attacker.getCharacterName() << " did " << Defender.getDefense() - Attacker.getAttackDamge() 
            << " to " << Defender.getCharacterName() << std::endl;
    }
    else if(AOM == 2){

        int health = Defender.getHealth();
        health -= (Defender.getMagicResistance() - Attacker.getMagicDamage());
        Defender.setHealth(health);

        std::cout <<  Attacker.getCharacterName() << " did " << Defender.getMagicResistance() - Attacker.getMagicDamage() 
            << " to " << Defender.getCharacterName() << std::endl;
    }
    else{
        std::cout << "Invalid attack - probably not been programmed yet" << std::endl;
    }
}

/*
void AttackPhase(Person* Attacker, Person* Defender): Determines if the attacker is using a physical or magic attack
    and sends correct information over to te Battle function
*/
void AttackPhase(Person Attacker, Person Defender){

    int attackOption = 0;
    std::cout << "1: Physical Attack 2: Magic Attack" << std::endl;

    std::cout << "Please enter an attack from the list above: " << std::endl;
    std::cin >> attackOption;

    switch(attackOption){

        case 1: Battle(Attacker, Defender, attackOption);
        break;

        case 2: Battle(Attacker, Defender, attackOption);
        break;

        default: std::cout << "Invalid attack option" << std::endl;
        break;
    }
}