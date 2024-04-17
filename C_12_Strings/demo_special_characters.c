#include <stdio.h>

int main(){
    //declare special characters
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt); //output: We are the so-called "Vikings" from the north.

    char txt2[] = "It\'s alright.";
    printf("%s\n", txt2); //output: It's alright.

    char txt3[] = "The character \\ is called backslash.";
    printf("%s", txt3); //output: The character \ is called backslash.
}