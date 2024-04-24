#include <stdio.h>
#include <string.h>

//有點類似於class的概念
struct MyStructure{ //structure declaration
    int myNum; //Member (int variable)
    char myLetter; //Member (char variable)
    char myString[30]; //Member (string variable)
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
    //s1.myString = "Hello, World!"; we can't assign a value to an array like this
    strcpy(s1.myString, "Some text"); //assign a value to the string using the strcpy function
    //要用strcpy函數需要引入<string.h>標頭文件

    //print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);

    return 0;
}