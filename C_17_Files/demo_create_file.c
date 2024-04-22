#include <stdio.h>

int main()
{
    /*FILE is basically a data type, and we need to create a pointer variable to work with it (fptr).*/
    FILE *fptr;

    /*create a file*/
    fptr = fopen("filename.txt", "w");

    /* mode:
        w - Writes to a file
        a - Appends new data to a file
        r - Reads from a file
    */

    /*close the file*/
    fclose(fptr);

    return 0;
}
