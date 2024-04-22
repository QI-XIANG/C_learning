#include <stdio.h>

int main()
{
    // create a file pointer
    FILE *fptr;

    // open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // write some text to the file
    fprintf(fptr, "Some text");

    // close the file
    fclose(fptr);

    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Hello World!");

    // Close the file
    fclose(fptr);

    /*If you write to a file that already exists,
    the old content is deleted, and the new content is inserted.
    This is important to know, as you might accidentally erase
    existing content.*/

    return 0;
}