#ifndef myMath
#define myMath
#include<iostream>	
#define SIZE 1000000
using namespace std;



//Basic Algebra
template<typename T>
T squareRoot(T x){
	
	T prev,k = 0;
        T kmax = 1000;
        T s = 1;
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

template<typename T>
T square(T num){
	T result;
	
	result = num * num;
	
	return result;
}
template<typename T>
T cube(T num){
	T result;
	
	result = num * num * num;
	
	return result;
	
}
template<typename T>
T power(T base, T exponent){
	
	T result = 1;
	T counter;
	
	for(counter = 1; counter <= exponent; counter++){
		
		result = result * base;
		
		
	}
	return result;
}
template<typename T>
T factorial(T x){
	
	T result = 1;
	for(unsigned int k = 1; k < x; k++){
		
		result = result * k;
		
	}
	
	return result;
}
template<typename T>
T mod(T x, T y){
	
	while(x >= y){
		x -= y;
	}
	
	return x;
	
}
//Geometry
template<typename T>
T sin(T opposite, T hypotenuse){
	
	T result;
	
	result = opposite/hypotenuse;
	
	return result;
	
}
template<typename T>
T cos(T adjacent, T hypotenuse){
	
	T result;
	
	result = adjacent/hypotenuse;
	
	return result;
}
template<typename T>
T tan(T opposite, T adjacent){
	
	T result;
	
	result = opposite/adjacent;
	
	return result;
}


//Discrete
template<typename T>
bool isPrime(T p){
	
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

/*
calls power function that way there is more code reuse
*/
template<typename T>
T power_mod(T base, T exponent, T module){
	
	return mod(power(base, exponent), module);
	
}

template<typename T>
T gcd(T x, T y){
	
	if(x == 0)
		return y;
	return gcd(y % x, x);
	
}


#endif