#include <stdio.h>

int main(){
    //create a variable
    int mayAge = 43;
    printf("%p", &mayAge); //output memory address of mayAge
    /*You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address
     of a variable as its value. To print pointer values, we use the %p format specifier.*/
    return 0;
}