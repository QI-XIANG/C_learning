#include <stdio.h>

int main(){
    //declare a file pointer
    FILE *fptr;

    //open a file in read mode
    fptr = fopen("filename.txt", "r");

    //store the content of the file
    char myString[100];

    //read the content and print it
    while(fgets(myString, 100, fptr)){
        printf("%s", myString);
    }

    //close the file
    fclose(fptr);

    return 0;
}