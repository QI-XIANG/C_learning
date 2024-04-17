#include <stdio.h>

int main(){
    //declare array
    int myNumbers [5] = {10, 25, 50, 75, 100};
    printf("%lu", sizeof(myNumbers)); //output: 20, because 5 * 4 bytes = 20 bytes
    printf("\n");

    //cacluate the length of the array
    int length = sizeof(myNumbers) / 5;
    printf("%d\n", length); //output: 4

    //better loop
    int i;
    for(i = 0; i < length; i++){
        printf("%d\n", myNumbers[i]);
    }
}