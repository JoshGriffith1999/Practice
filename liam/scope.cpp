#include<iostream>
#include<string>

using namespace std;

int x = 3;

void foo4(){

    string fruit;
    cout << "Enter a fruit\t";
    cin >> fruit;

    if(fruit != "banana"){
        cout << "The value of x in foo4  is= " << x << " with a memory address of " << &x << endl;
        cout << "Next time eneter banana" << endl;
    }
    else{
        cout << "The value of x in foo4  is= " << x << " with a memory address of " << &x << endl;
    }
}

void foo3(int x){

    x++;

        cout << "The value of x in foo3  is= " << x << " with a memory address of " << &x << endl;
}

void foo2(){

        cout << "The value of x in foo2  is= " << x << " with a memory address of " << &x << endl;
}

void foo(){

    int x = 2;

        cout << "The value of x in foo  is= " << x << " with a memory address of " << &x << endl;

    foo2();
    foo3(x);
}

int main(){

    cout << "The global x = " << x << " with a memory address of " << &x << endl;
    foo();
    foo4();
    
    return 0;
}