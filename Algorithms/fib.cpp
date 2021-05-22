#include<iostream>
using namespace std;

//regular
int fib1(int i){

    if(i == 0 || i == 1)
        return i;
    else
        return fib1(i - 1) + fib1(i - 2);

}

int fib2(int i, int* n){

    if(n[i] != -1)
        return n[i];
    
    return n[i] = fib2(i - 1, n) + fib2(i - 2, n);
}

int main(){

    int n = 5;
    int array[n] = {-1};
    array[0] = 1;
    array[1] = 1;

    cout << "Fib 1: " << fib1(n) << endl;
    cout << "Fib 2: " << fib2(n, array) << endl;
    return 0;
}