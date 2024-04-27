#include <stdio.h>

//main function
int main(){ 
    //declare some variables
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    //print the size of these variables
    printf("%lu\n", sizeof(myInt)); //4 bytes
    printf("%lu\n", sizeof(myFloat)); //4 bytes
    printf("%lu\n", sizeof(myDouble)); //8 bytes
    printf("%lu\n", sizeof(myChar));//1 byte
}