#include <stdio.h>

int main(){
    //declare file pointer
    FILE *fptr;

    //open a file in read mode
    fptr = fopen("loremipsum.txt", "r");

    //print some text if the file does not exist
    if(fptr == NULL){
        printf("Not able to open the file.");
    }

    //close the file
    fclose(fptr);
}