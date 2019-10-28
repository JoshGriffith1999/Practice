#ifndef myMath
#define myMath
#define SIZE 1000000
using namespace std;


bool isPrime(int p){
	
	if(p % 2 != 0)
		return false;
	else if(p % 3 != 0)
		return false;
	else if(p % 5 != 0)
		return false;
	else if(p % 7 != 0)
		return false;
	else
		return true;
	
	
	
	
}
#endif