#include <stdio.h>
#include <stdbool.h> //In C, the bool type is not a built-in data type, like int or char.

int main(){
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    //Return boolean values
    printf("%d\n", isProgrammingFun); // Returns 1(true)
    printf("%d\n", isFishTasty); // Returns 0(false)
    
    //Comparing Values and Variables
    printf("%d\n", 10 > 9); //Returns 1(true) because 10 is greater than 9
    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
    printf("%d\n", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55

    printf("%d\n", isProgrammingFun == isFishTasty); // Returns 0 (false) because isProgrammingFun is true and isFishTasty is false
    //Remember to include the <stdbool.h> header file when working with bool variables.
}