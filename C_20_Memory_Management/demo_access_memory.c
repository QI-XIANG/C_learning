#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    //allocate memory
    int *ptr; //declare pointer
    ptr = calloc(4, sizeof(*ptr)); //allocate 4 element

    //write to the memory
    *ptr = 2; //ptr[0] = 2
    ptr[1] = 4;
    ptr[2] = 6;

    //read from the memory
    printf("%d\n", *ptr);
    printf("%d\n", ptr[0]);
    printf("%d %d %d", ptr[1], ptr[2], ptr[3]);
}