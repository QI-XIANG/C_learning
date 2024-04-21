#include <stdio.h>

//function declaration
int myFunction(int, int);

//the main method
int main(){
    int result = myFunction(5, 3); //call the function
    printf("Result is = %d", result);
    return 0;
}

//function definition
int myFunction(int x, int y){
    return x + y;
}

/*A function consist of two parts:
Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)*/