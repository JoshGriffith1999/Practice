#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    int a;
    int b;
    int c;
    char buffer[12];
}myStruct;

typedef union {
    int a;
    int b;
    int c;
    char buffer[12];
}myUnion;

typedef union
{
    struct
    {
        int stop1;
        int stop2;
        int control;
        int databits;
        int parity;
        int data;
    };

    int packet[6];

}serial;


int main(int argc, char** argcv){

    myStruct struct1;
    myUnion union1;
    serial RS232;

    struct1.a = 1;
    struct1.b = 3;
    struct1.c = 5;

    strncpy(struct1.buffer, "crayon eater", 12);
    

    printf("Size of my struct %lu\n", sizeof(struct1));
    
    printf("Element A of my struct is %d\n", struct1.a);
    printf("Element B of my struct is %d\n", struct1.b);
    printf("Element C of my struct is %d\n", struct1.c);

    printf("Element Buffer of my struct is %s\n", struct1.buffer);

    strncpy(union1.buffer, "crayon eater", 12);


    printf("Size of my union %lu\n", sizeof(union1));
    printf("Value of A in my Union is %d\n", union1.a);
    printf("Value of B in my Union is %d\n", union1.b);
    printf("Value of C in my Union is %d\n", union1.c);

    printf("Value of Buffer in my Union is %s\n", union1.buffer);


    
    RS232.stop1 = 1;
    RS232.stop2 = 0;
    RS232.control = 0;
    RS232.databits = 0;
    RS232.parity = -1;
    RS232.data = 3;

    printf("Size of my Serial Union with an embedded struct is %lu\n", sizeof(RS232));
    for(int i = 0; i < 6; i++){
        printf("%d\n", RS232.packet[i]);
    }

    return 0;
}