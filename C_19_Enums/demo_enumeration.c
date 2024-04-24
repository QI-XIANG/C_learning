#include <stdio.h>

//An enum is a special type that represents a group of constants (unchangeable values).
//To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma.

enum Level{
    LOW,
    MEDIUM,
    HIGH
};

/*It is not required to use uppercase, but often considered as good practice.
Enum is short for "enumerations", which means "specifically listed".*/

//main function
int main(){
    //create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;

    //print the enum variable
    printf("%d", myVar);

    return 0;
}