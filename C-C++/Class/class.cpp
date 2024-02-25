/*
    Class: Just a way to group data and functionality together

    Object: A instance of a defined class

    Instanciate: Create a new running object of a class

    Visability: Declare what can be seen by everyone
        Public: Everything is visable to everyone
        Private: Only the class has access to these functions and variables
        Protected: Weird one, just leave it
    
    This: C++ keyword that referneces a member of the current instance of the class,
            pass the current object as a parameter to a method,
            or is used to declare indexers
    -
    > : Is used to access class, structures, and unions using a pointer

    . : Is used to access class, structures, and unions NOT using a pointer
*/

#include<iostream>
#include<string.h>

using namespace std;


class player{

    public:
        string name;
        int health;
        int speed;
        int damage;
        int armour;

        player();
        player(string);
        ~player();

        int getHealth();
        string getName();


    private:

    int magicDamage;
};

int main(int argc, char** argv){

    string characterName = "DJ";
    player DJ(characterName); //Here we are declaring the player on the stack

    string characterName2 = "Thomas";
    player* Thomas = new player(characterName2);

    cout << "Character's name on the stack is is: " << DJ.getName() << endl;

    cout << "Character's name on the heap is is: " << Thomas->getName() << endl; //Since we declared Thomas on the heap, we have to use -> to reference it's members

    delete Thomas; //Free the memory that we allocated

    return 0;
}

//What we are doing here is changing the scope to the player class and defining the constructor, destructor, and the getHealth functions
player::player(){
    
    this->health = 100;
    this->speed = 10;
    this->damage = 11;
    this->armour = 12;

    cout << "Setting up default stats" << endl;
}

player::player(string characterName){
    
    this->health = 100;
    this->speed = 10;
    this->damage = 11;
    this->armour = 12;
    this->name = characterName;

    cout << "Setting up default stats" << endl;
}

int player::getHealth(){

    return this->health;
}

string player::getName(){

    return this->name;
}

player::~player(){

    cout << "You died ye laddie " << endl;
}