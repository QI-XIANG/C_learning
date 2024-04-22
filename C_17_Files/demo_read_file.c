#include <stdio.h>

int main(){
    //create a file pointer
    FILE *fptr;

    //open a file in read mode
    fptr = fopen("filename.txt", "r");

    //store the content of the file
    char myString[100];

    //fgets(): read content from the file
    fgets(myString, 100, fptr);

    /*The first parameter specifies where to store the file content, which will be in the myString array we just created.
    The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
    The third parameter requires a file pointer that is used to read the file (fptr in our example).*/

    printf("%s", myString);

    //close the file
    fclose(fptr);

    return 0;
}