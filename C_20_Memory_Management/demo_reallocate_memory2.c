#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    /*The realloc() function returns a NULL pointer if it is not able to allocate more memory. 
    This is very unlikely, but it is worth keeping in mind when you need your code to be failproof.
    The following example checks whether realloc() is able to resize the memory or not, by checking for a NULL pointer.*/
    int *ptr1, *ptr2;

    //allocate memory
    ptr1 = malloc(4);

    //attempt to resize the memory
    ptr2 = realloc(ptr1, 8);

    //check whether realloc is able to resize the memory or not
    if(ptr2 == NULL){
        //if reallocation fails
        printf("Failed. Unable to resize memory.");
    }else{
        //if reallocation is successful
        printf("Success. 8 bytes reallocated at address %p", ptr2);
        ptr1 = ptr2; //update ptr1 to point to the newly allocated memory
    }

    /*Note: You should always include error checking (if pointer == NULL) when allocating memory.*/
    /*Note: You should also always free, or release, allocated memory when you are done using it. 
    This is important to make sure that your program behaves as expected, but it will 
    also make it more maintainable and efficient.*/

    /*To free memory, simply use the free() function.*/
    //free allocated memory
    free(ptr1);

    return 0;
}