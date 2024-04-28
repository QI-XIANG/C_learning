#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    //declare a pointer
    int *ptr;
    //allocate memory
    ptr = malloc(sizeof(*ptr));
    //free the memory
    free(ptr);
    ptr = NULL;
    /*It is considered a good practice to set a pointer to NULL after freeing memory so that you 
    cannot accidentally continue using it. If you continue using memory after it has been freed you may corrupt data from other 
    programs or even another part of your own program.*/
}