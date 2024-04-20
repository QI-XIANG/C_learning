#include <stdio.h>

int main(){
    //declare variable
    int doorCode = 1337;

    if(doorCode == 1337){
        printf("Correct code.\nThe door is now open.\n");
    }else{
        printf("Wrong code.\nThe door remains closed.\n");
    }

    //declare variable
    int myNum = 10;

    if(myNum > 0){
        printf("The value is a positive number.\n");
    }else if(myNum < 0){
        printf("The value is a negative number.\n");
    }else{
        printf("The value is 0.\n");
    }

    //declare variables
    int myAge = 25;
    int votingAge = 18;

    if(myAge >= votingAge){
        printf("Old enough to vote!\n");
    }else{
        printf("Not old enough to vote.\n");
    }

    //change the value of myNum
    myNum = 5;

    if(myNum %2 == 0){
        printf("%d is even.", myNum);
    }else{
        printf("%d is odd.", myNum);
    }

    return 0;
}