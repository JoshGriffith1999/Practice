#ifndef HEADERFILER
#define HEADERFILER

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Create an enum
enum cattleQualityGrade{
    PRIME,
    CHOICE,
    SELECT,
    STANDARD,
    COMMERCIAL,
    UTILITY,
    CUTTER,
    CANNER
};

enum httpErrorCode{
    GOOD = 0,
    INTERNAL_PROBLEM = 500,
    NOT_FOUND = 404,
    SERVICE_UNAVAILABLE = 503,
    BAD_REQUEST = 400,
    UNATHORIZED = 401,
    BAD_GATEWAY = 502
};

/*** Create a structure ***/
//should be 128 in size
//Whenever we make an instace of header, we don't need to include the struct keyword in the variable decleration
typedef struct{
    int type;      //4 bytes
    int bytes;     //4 bytes
    int flag;      //4 bytes
    int data[29]; //4*29 = 116 bytes

}header;

//When we make an instance of myStructure, we need to include the strucute keyword in the variabel decleration
struct myStructure{};

void printSomething(char* icstr){

    char substring[32];
    unsigned long int stringLen = strlen(icstr);

    printf( "Initial string length is %ld\n", stringLen );

    //Print 32 character string
    if( stringLen >=32 ){

        strncpy( substring, icstr, 32);

        
    }else{
        strncpy( substring, icstr, stringLen );
    }

    printf( "The stirng is %s \n", substring );
}

void cattleDetermination( enum cattleQualityGrade currentCow){

    printf( "Current cows numbercail value is %d\t", currentCow );
    switch( currentCow ){

        case PRIME: puts("Top of the line beef\n");
        break;

        case CHOICE: puts("Good choice, but not best\n");
        break;

        case SELECT: puts("Desperate for a decent steak I see\n");
        break;

        case STANDARD: puts("Bottom of the barell grocery store name brand freezer burnt chunk of road kill\n");
        break;

        case UTILITY: puts("You know aligator hunters use this as bait, right?\n");
        break;

        case CANNER: puts("This should be a crime, but its not because 'Murica\n");
        break;

        case CUTTER: puts("Dog food, next\n");
        break;

        default: puts("Couldn't provide a real quality grade value, so you get this bullshit message\n");
        break;

    };

};

void doesFileExist(char* fileName){

    FILE* filePointer = fopen(fileName, "r" );

    if( filePointer == NULL ){
        printf("FILE DOES NOT EXIST!!");
    }
}

/******************************************************
* Prints a christmas tree based on a provided depth
*******************************************************/
void printTree( int depth ){

    for(int i = 1; i <= depth; i++){

        for(int j = depth; j > (i+1/2); j-- )
            printf(" ");


        for(int k = 0; k < i *2 -1; k++){
            printf("*");
        }
        
        printf("\n");
    }

    for(int i = 0; i < depth-1*2; i++){
        printf(" ");
    }

    printf("*\n");
}


/*****************************************************
* fLogMsg
*****************************************************/
int fLogMsg( char* fileName, char* message ){

    FILE* fptr = fopen( fileName, "a" );

    int elementsWritten = 0;

    if( fptr == NULL ){
        printf( "ERROR,%s does not exist\n", fileName );
        return -1;
    }else{
        elementsWritten = fwrite( message, sizeof(char), strlen(message)/sizeof(char) , fptr);
        printf( "Number of elements written to %s, %d\n", fileName, elementsWritten );

    }

    fclose( fptr );
    return 0;

}

/****************************************************
*  Memory allocation and deallocation practice
*  Dereference: Access the value stored at the index from pointer base address
*     *ptr - get value at pointer address + 0
*     ptr[X] - get value at pointer address + ( x * sizeof(x) )
*  Referemce: Get the memory address of a variable
*     &ptr - gives you the memory address of the variable
****************************************************/
void fMemory( int len ){

    int* ptr1 = malloc( len ); //Just allocates a block of memeory of passed in size

    for( int i = 0; i < sizeof(ptr1); i++ ){

        printf( "Memory address of element %d %p \n", i, &ptr1[i] );
    }

    free( ptr1 );
}

void fMemory2( int len ){

    //this should allocate a block of memory 4*len
    header* ptr1 = calloc( len, sizeof(header) ); //allocates a block of memory of passes in length and size

    printf( "Size of header structure is %ld \n", sizeof( header ) );
    for( int i = 0; i < sizeof(ptr1); i++ ){

        printf( "Memory address of element %d %p \n", i, &ptr1[i] );
    }

    free( ptr1 );
}

#endif //HEADERFILER
