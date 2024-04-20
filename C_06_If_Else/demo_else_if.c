#include <stdio.h>

int main(){
    //declare variable
    int time = 22;
    if(time < 10){
        printf("Good morning.");
    }else if(time < 20){
        printf("Good day.");
    }else{
        printf("Good evening.");
    }//ouput: Good evening.
}