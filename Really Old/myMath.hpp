#ifndef myMath
#define myMath
#define SIZE 1000000
using namespace std;

//Basic Algebra
float squareRoot(float x){
	
	float prev,k = 0;
        float kmax = 1000;
        float s = 1;
        for(k=0;k<kmax;k++)
        {
                prev = s;
                s = (s + x/s)/2;
                if(prev == s)
                {
                        break;
                }
        }
        return s;
}

float square(float num){
	float result;
	
	result = num * num;
	
	return result;
}

float cube(float num){
	float result;
	
	result = num * num * num;
	
	return result;
	
}

float power(float base, float exponent){
	
	float result = 1;
	int counter;
	
	for(counter = 1; counter <= exponent; counter++){
		
		result = result * base;
		
		
	}
	return result;
}

//Geometry
float sin(float opposite, float hypotenuse){
	
	float result;
	
	result = opposite/hypotenuse;
	
	return result;
	
}

float cos(float adjacent, float hypotenuse){
	
	float result;
	
	result = adjacent/hypotenuse;
	
	return result;
}

float tan(float opposite, float adjacent){
	
	float result;
	
	result = opposite/adjacent;
	
	return result;
}

//Discrete
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