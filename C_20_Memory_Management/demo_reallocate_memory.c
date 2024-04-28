#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    /*The realloc() function takes two parameters
        The first parameter is a pointer to the memory that is being resized.
        The second parameter specifies the new size of allocated memory, measured in bytes.*/
    int *ptr1, *ptr2, size;
    //allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p\n", size, ptr1);

    //resize the memory to hold six integers
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d bytes reallocated at address %p", size, ptr2);
}