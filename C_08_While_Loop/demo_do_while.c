#include <stdio.h>

int main(){
    /*The do/while loop is a variant of the while loop. 
    This loop will execute the code block once, before checking if the condition is true, 
    then it will repeat the loop as long as the condition is true.*/
    //不管怎樣，至少會執行一次
    int i = 0;
    do{
        printf("%d\n", i);
        i++;
    }while(i < 5);
}