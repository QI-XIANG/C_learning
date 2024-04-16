#include <stdio.h>

int main(){
    
    for(int i = 0; i <= 100; i += 10){
        printf("%d\n", i);
    }

    printf("\n");

    for (int i = 0; i <= 10; i = i + 2){
        printf("%d\n", i);
    }

    printf("\n");

    //declare variables
    int number = 2;
    int i;

    //print the multiplication table for the number 2
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }

}