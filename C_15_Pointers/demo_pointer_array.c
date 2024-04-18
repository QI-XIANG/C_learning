#include <stdio.h>

int main(){
    //create an array of integers
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    //print the value in the integer array
    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    //print the address in the integer array
    for(i = 0; i < 4; i++){
        printf("%p\n", &myNumbers[i]);
    }

    //create an int variable
    int myInt;

    //get the memory size of the int variable
    printf("%lu\n", sizeof(myInt));

    //get the size of the integer array
    printf("%lu\n", sizeof(myNumbers));

    //get the memory address of the int array
    printf("%p\n", myNumbers);

    //get the memory address of the first element in the int array
    printf("%p\n", &myNumbers[0]);

    //get the value of the first element in the int array
    //myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access its value
    printf("%d\n", *myNumbers);

    //get the value of the second element in the int array
    printf("%d\n", *(myNumbers + 1));

    //get the value of the third element in the int array
    printf("%d\n", *(myNumbers + 2));

    int *ptr = myNumbers;
    for(i = 0; i < 4; i++){
        printf("%d\n", *(ptr + i));
    }

    //change the value of the first element to 13
    *myNumbers = 13;

    //change the value of the second element to 17
    *(myNumbers + 1) = 17;

    //get the value of the first element in the int array
    printf("%d\n", *myNumbers);

    //get the value of the second element in the int array
    printf("%d", *(myNumbers + 1));

    return 0;

}