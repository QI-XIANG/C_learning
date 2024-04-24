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

    //print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
}
