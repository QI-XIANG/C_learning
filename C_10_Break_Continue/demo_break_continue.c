#include <stdio.h>

int main(){
    //declare variable
    int i = 0;

    for(i = 0; i <= 10; i++){
        if(i == 4){
            break;
        }
        printf("%d\n", i);
    }

    printf("\n");

    for(i = 0; i <= 10; i++){
        if(i == 4){
            continue;
        }
        printf("%d\n", i);
    }

    printf("\n");

    i = 0;
    while(i < 10){
        if(i == 4){
            break;
        }
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    i = 0;
    while(i < 10){
        if(i == 4){
            continue;
        }
        printf("%d\n", i);
        i++;
    }
}