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
    //create multiple structure variables
    struct MyStructure s1;
    struct MyStructure s2;

    //assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    //print values
    printf("My number(s1): %d\n", s1.myNum);
    printf("My letter(s1): %c\n", s1.myLetter);
    printf("My number(s2): %d\n", s2.myNum);
    printf("My letter(s2): %c\n", s2.myLetter);

    return 0;
}