#include <stdio.h>
#include <stdlib.h>

//define myFunction
void myFunction(){
    int *ptr;
    ptr = malloc(sizeof(*ptr));
}

//main function
int main(){
    /*A memory leak happens when dynamic memory is allocated but never freed.
    If a memory leak happens in a loop or in a function that is called frequently it could take
    up too much memory and cause the computer to slow down. There is a risk of a memory leak if 
    a pointer to dynamic memory is lost before the memory can be freed. This can happen accidentally,
    so it is important to be careful and keep track of pointers to dynamic memory.*/

    int x = 5; //declare a variable
    int *ptr; //declare a pointer
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x; //the pointer is overwritten

    /*In this example, the memory that was allocated inside of the function remains allocated
    after the function ends but it cannot be accessed anymore. One way to prevent this 
    problem is to free the memory before the function ends.*/
    myFunction();
    printf("The function has ended.");

    /*If realloc() is unable to reallocate memory it will return a pointer to NULL and the original memory will remain reserved.
    In this example, if realloc() fails then the NULL pointer is assigned to the ptr variable, overwriting the original memory 
    address so that it cannot be accessed anymore.*/
    int * ptr2;
    ptr2 = malloc(sizeof(*ptr2));
    ptr2 = realloc(ptr2, 2*sizeof(*ptr2));

    return 0;

    /*In summary, when managing memory in C, use best practices:
        1. Remember to check for errors (NULL return values) to find out if memory allocation was sucessful or not
        2. Prevent memory leaks - always remember to free memory that is no longer used, or else the program might underperform or even worse, crash if it runs out of memory
        3. Set the pointer to NULL after freeing memory so that you cannot accidentally continue using it*/
}