#include <stdio.h>

//有點類似於class的概念
struct MyStructure{ //structure declaration
    int myNum; //Member (int variable)
    char myLetter; //Member (char variable)
}; //end the structure with a semicolon

//Structures (also called structs) are a way to group several related variables into one place. 
//Each variable in the structure is known as a member of the structure.
//Unlike an array, a structure can contain many different data types (int, float, char, etc.).

int main(){
    //create a structure variable
    struct MyStructure s1;

    //assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    //print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    return 0;
}