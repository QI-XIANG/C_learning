#include <stdio.h>

int main(){
    //create an integer variable to store user input
    int myNum;

    //ask user to type a number
    printf("Type a number: \n");

    //get and save the number the user types
    scanf("%d", &myNum);

    //the reference operator (&myNum), which stores the memory address of the variable myNum

    //output the number the user types
    printf("Your number is: %d\n", myNum);
}