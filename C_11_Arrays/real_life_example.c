#include <stdio.h>

int main(){
    //create an array to store different ages
    int ages [] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;
    //get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    for(i = 0; i < length; i++){
        sum += ages[i];
    }

    avg = sum / length;

    printf("The average age is %.2f\n", avg);


    // create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];
    for(i = 0; i < length; i++){
        if(ages[i] < lowestAge){
            lowestAge = ages[i];
        }
    }

    printf("The lowest age is %d", lowestAge);
}