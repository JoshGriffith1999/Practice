#ifndef _SORT_H_
#define _SORT_H_
#include<iostream>
#define SIZE 5
using namespace std;

/*Bubble Sort*/
void bubble(int array[]){

    int hold = 0;
    for(int i = 0; i < SIZE; i++){
        for(int k = i+1; k < SIZE; k++){

            if(array[i] < array[k]){

                swap(array[i], array[k]);
            }
        }
    }
}

/*Insertion Sort*/
void insertion(int array[]){

    int key, j, i;

    for(i = 1; i < SIZE; i++){

        key = array[i];
        j = i-1;
        
        while(j >= 0 && array[j] > key){
            array[j +1] = array[j];
            j--;
        }
        array[j = j+1] = key;
    }
}

/*Selection Sort*/
void selection(int array[]){

    int i, j, lowerIndex;
    for(i = 0; i < SIZE - 1; i++){

        lowerIndex = i;
        for(j = i+1; j < SIZE; j++)
            if(array[j] < array[lowerIndex])
                lowerIndex = j;

        swap(array[i], array[lowerIndex]);
    }
}

/*Swap
    used to swap the values of two indexes in an array
*/
void swap(int* x, int* y){

    int hold = *x;
    *x = *y;
    *y = hold;
}
#endif