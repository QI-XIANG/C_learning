#include <stdio.h>

//declare enum variable
enum Level{
    //change the values of the enum items
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75,
    VERY_HIGH //76, Note that if you assign a value to one specific item, the next items will update their numbers accordingly
};

//main function
int main(){
    //create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;
    enum Level myVar2 = VERY_HIGH;

    //print the enum variable
    printf("%d\n", myVar);
    printf("%d", myVar2);

    return 0;
}