#include<iostream>

int fibFastedr(int* x, int loc){

    if(x[loc] != 1){
        return x[loc];
    }

    return x[loc] = fibFastedr(x, loc - 1) + fibFastedr(x, loc - 2);
}

void fill(int* x, int size){

    for(int i = 0; i < size; i++){

        if(i == 0 || i == 1){
            x[i] = 1;
        }
        else{
            x[i] == -1;
        }
    }
}
int main(int argc, char *argv[]){

    if(argc != 2){

        std::cout << "ERROR NEED TO PASS IN A NUMBER" << std::endl;
        return -1;
    }

        int* fib = new int[atoi(argv[1])];
        fill(fib, atoi(argv[1]));


    std::cout << "The " << atoi(argv[1]) << " number in the fib sequence is " <<  fibFastedr(fib, 0) << std::endl;
    return 0;
}

////