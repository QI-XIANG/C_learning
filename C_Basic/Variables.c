# include <stdio.h>

int main(){
    //Declare a variable
    //Assign a value to the variable
    int myNum = 5;
    int myNum2 = 10;
    int sum = myNum + myNum2;
    //%c for char and %f for float
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%d\n", myNum); //Format Specifiers
    printf("%d\n", sum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My favorite number is: %d\n", myNum);
    printf("My number is %d and my letter is %c", myNum, myLetter);
    return 0;
}