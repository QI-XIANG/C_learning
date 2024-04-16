#include <stdio.h>
#include <stdbool.h> //In C, the bool type is not a built-in data type, like int or char.

int main(){
    //declare variables
    int myAge = 25;
    int votingAge = 18;

    printf("%d\n", myAge >= votingAge); // Returns 1(true) because 25 is greater than or equal to 18

    //use if...else
    if(myAge > votingAge){
        printf("Old enough to vote");
    }else{
        printf("Not old enough to vote");
    }
}