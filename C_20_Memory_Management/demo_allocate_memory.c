#include <stdio.h>
#include <stdlib.h>

//main function
int main(){
    int students_array[20];
    printf("%lu bytes\n", sizeof(students_array)); //80 bytes (4*20 bytes)
    
    //dynamic memory
    //The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.
    /*The calloc() function has two parameters:
        amount - Specifies the amount of items to allocate
        size - Specifies the size of each item measured in bytes*/
    //declare pointer
    int *ptr1, *ptr2;
    ptr1 = malloc(sizeof(*ptr1));
    //sizeof(*ptr1) tells C to measure the size of the data at the address
    ptr2 = calloc(1, sizeof(*ptr2));
    
    //we cannot use sizeof to measure how much memory was allocated
    //we have to calculate that by multiplying the amount of items by the size of the data type
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%d bytes", numStudents * sizeof(*students)); // 48 bytes
}