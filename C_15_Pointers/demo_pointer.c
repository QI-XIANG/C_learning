#include <stdio.h>

int main(){
    //create a variable
    int myAge = 43;

    printf("%d\n", myAge); //output the value of myAge(43)
    printf("%p\n", &myAge); //output memory address of myAge

    //A pointer is a variable that stores the memory address of another variable as its value.
    //To declare a pointer, you must use the asterisk (*) symbol.
    int* ptr = &myAge;
    printf("%p\n", ptr); //output memory address of myAge

    //dereference
    printf("%d", *ptr); //output the value of myAge(43)
    /*Note that the * sign can be confusing here, as it does two different things in our code:
        When used in declaration (int* ptr), it creates a pointer variable.
        When not used in declaration, it act as a dereference operator.*/
}