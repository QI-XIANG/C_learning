#include <stdio.h>

int main(){
    //declare file pointer
    FILE *fptr;

    //open a file in read mode
    fptr = fopen("filename.txt", "r");

    //store the content of the file
    char myString[100];

    //if the file does exist
    if(fptr != NULL){

        //read the content and print it
        while(fgets(myString, 100, fptr)){
            printf("%s", myString);
        }

    }else{ //if the file does not exist 
        printf("Not able to open the file.");
    }

    //close the file
    fclose(fptr);
}