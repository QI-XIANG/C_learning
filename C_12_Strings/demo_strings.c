#include <stdio.h>
/*C does not have a String type to easily create string variables. 
Instead, you must use the char type and create an array of characters to make a string in C*/
int main(){
    //declare a char array
    char greetings[] = "Hello World!";
    //format specifier %s to tell C that we are now working with strings
    printf("%s\n", greetings); //output: Hello World!

    //access string element
    printf("%c\n", greetings[0]); //output: H

    //modify string element
    greetings[0] = 'J';
    printf("%s\n", greetings); //output: Jello World!

    //loop through a string
    char carName[] = "Volvo";
    int i;

    for(i = 0; i < 5; i++){
        printf("%c", carName[i]);
    }

    printf("\n");

    int length = sizeof(carName)/sizeof(carName[0]);
    for(i = 0; i < length; i++){
        printf("%c", carName[i]);
    }

    printf("\n");

    //another way of creating strings
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings2); //output: Hello World!

    //difference
    printf("%lu\n", sizeof(greetings)); //output: 13
    printf("%lu\n", sizeof(greetings2)); //output: 13

    //real-life example
    char message[] = "Good to see you,";
    char fname[] = "John";
    printf("%s %s", message, fname); //output: Good to see you, John
}