#include <stdio.h>

int main(){
    //declare variables
    int i, j;
    
    //outer loop
    for(i = 1; i <= 2; i++){
        printf("Outer loop: %d\n", i); //Execute 2 times

        for(j = 1; j <= 3; j++){
            printf("Inner loop: %d\n", j); //Execute 6 times
        }
    }
}