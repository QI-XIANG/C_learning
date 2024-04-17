#include <stdio.h>

int main(){
    //declare array
    int myNumbers [] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]); //output: 25

    //change array element
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]); //output: 33

    //loop through an array
    int i = 0;
    for(i = 0; i < 4; i++){
        printf("%d\n", myNumbers[i]);
    }

    //You are not able to change the size of the array after creation
    // int myNumbers [] = {25, 50, 75, 100, 125}; //error

}