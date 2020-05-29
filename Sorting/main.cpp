#include <iostream>
#include "Sort.h"

using namespace std;

int main(){

    int array[5] = {1,3,5,2,4};

    Sort sort;

    sort.bubble(array);

    sort.print(array);
    return 0;
}