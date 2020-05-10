#include<iostream>
#include"Sort.h"
using namespace std;

template<typename T>
void Sort<T>::print(T array[]){

    len = array.length;

    for(int i = 0; i < len; i++)
        cout << array[i] << end;
}



template<typename T>
void Sort<T>::bubble(T array[]){

    int arraySize = array.length;
    int hold = 0;

    for(int i = 0; i < arraySize; i++){
        for(int k = 0; k < arraySize; k++){

            if(array[i] < array[k]){
                hold = array[i];
                array[i] = array[k];
                array[k] = hold;

            }
        }
    }
}