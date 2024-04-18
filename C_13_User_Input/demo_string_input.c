#include <stdio.h>

int main(){
    //create a string
    char firstName[30];

    //ask user to type their first name
    printf("Enter your first name: \n");

    //get and save the text
    scanf("%s", firstName);

    //output the text
    printf("Hello %s\n", firstName);

    /*When working with strings in scanf(), you must specify the size of the string/array 
    (we used a very high number, 30 in our example, but atleast then we are certain it will 
    store enough characters for the first name), and you don't have to use the reference operator (&).*/

    /*However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character,
    which means that it can only display a single word (even if you type many words).*/

    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);
    //Use the scanf() function to get a single word as input, and use fgets() for multiple words.
}