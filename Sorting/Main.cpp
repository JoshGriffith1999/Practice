#include<iostream>
#include"Sort.h"

using namespace std;

int main(){

    int array[5];
    
    array[0] = 1;
    array[1] = 3;
    array[2] = 5;
    array[3] = 2;
    array[4] = 4;

    Sort<int> sort;

    sort.bubble(array);

    sort.print(array);
    return 0;
}