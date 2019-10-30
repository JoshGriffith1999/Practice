#ifndef BattleCharacter
#define BattleCharacter
using namespace std;

template<typename T>
class avatar{
	
	private:
		T health = 0;
		T magicPower = 0;
		T armour = 0;
		T strength = 0;
		
	public:
	
	//Constructors and deconstructors
	avatar();
	avatar(T,T,T,T);
	~avatar();
	
	//Getter Functions
	T getHealth();
	T getMagicPower();
	T getArmour();
	T getStrength();
	
	//Setter functions
	void setHealth(T);
	void setMagicPower(T);
	void setArmour(T);
	void setStrength(T);
}

template<typename T>
avatar::avatar(){
	
	this -> health = 0;
	this -> magicPower = 0;
	this -> armour = 0;
	this -> strength = 0;
	
	cout << "Constructor #1" << end;
}
template<typename T>
avatar::avatar(T h, T mp, T a, T s){
		this -> health = h;
	this -> magicPower = mp;
	this -> armour = a;
	this -> strength = s;
	
	cout << "Constructor #1" << end;
}
template<typename T>
avatar::~avatar(){
	
	cout << "De-constructor" << end;
	
}

template<typename T>
void avatar::getHealth(){}
template<typename T>
void avatar::getMagicPower(){}
template<typename T>
void avatar::getArmour(){}
template<typename T>
avatar::getStrength(){}

template<typename T>
T avatar::setHealth(T h){}
template<typename T>
T avatar::setMagicPower(T mp){}
template<typename T>
T avatar::setArmour(T a){}
template<typename T>
T avatar::setStrength(T s){}


#endif