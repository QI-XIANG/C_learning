#include <stdio.h>

//create a structure
struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

//main function
int main(){

    //create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;

    s2 = s1; //copy the values of s1 to s2

    //print values
    printf("s1: %d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("s2: %d %c %s", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}