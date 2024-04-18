#include <stdio.h>

int main(){
    //create an int and a char variable
    int myNum;
    char myChar;

    //ask user to type a number and a character
    printf("Type a number and a character, then press enter: \n");

    //get and save the number and character the user types
    scanf("%d %c", &myNum, &myChar);

    //print the number
    printf("Your number is: %d\n", myNum);

    //print the character
    printf("Your character is: %c\n", myChar);
}