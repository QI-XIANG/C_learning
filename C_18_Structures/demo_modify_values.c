#include <stdio.h>
#include <string.h>

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

    //modify values
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    //copy the values of s1 to s2
    s2 = s1;

    //modify values
    s2.myNum = 40;
    s2.myLetter = 'D';
    strcpy(s2.myString, "Another thing");
   
    //print values
    printf("s1: %d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("s2: %d %c %s", s2.myNum, s2.myLetter, s2.myString);

    /*Imagine you have to write a program to store different information about Cars,
    such as brand, model, and year. What's great about structures is that you can create a 
    single "Car template" and use it for every cars you make. */
    
    return 0;
}