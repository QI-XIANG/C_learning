#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    //declare a pointer
    int *ptr;
    ptr = malloc(sizeof(*ptr)); //allocate memory

    //if memory cannot be allocated, print a message and end the main() function
    if(ptr == NULL){
        printf("Unable to allocate memory.");
        return 1;
    }

    //set the value of the integer
    *ptr = 20;

    //print the integer value
    printf("Integer value: %d", *ptr);

    //free allocated memory
    free(ptr);

    //set the pointer to Null to prevent it from being accidentally used
    ptr = NULL;
}