#include<iostream>
#include"Sort.hpp"

void Sort::print(int array[]){

    for(int i = 0; i < 5; i++)
        cout << array[i] << endl;
}

void Sort::bubble(int array[]){


    int hold = 0;

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){

            if(array[i] < array[k]){
                hold = array[i];
                array[i] = array[k];
                array[k] = hold;

            }
        }
    }
}