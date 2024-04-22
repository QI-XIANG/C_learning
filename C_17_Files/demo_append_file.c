#include <stdio.h>

int main(){
    // create a file pointer
    FILE *fptr;

    // open a file in writing mode
    fptr = fopen("filename.txt", "a");

    // write some text to the file
    fprintf(fptr, "\nHi everybody!");

    // close the file
    fclose(fptr);
}