#include <stdio.h>
//在不需要宣告bool變數的情況下，可以不用引入stdbool.h這個標頭檔
#include <stdbool.h> //In C, the bool type is not a built-in data type, like int or char.

int main(){
    //The if Statement
    if(20 > 18){
        printf("20 is greater than 18\n");
    }
    //declare variables
    int x = 20;
    int y = 18;
    if(x > y){
        printf("x is greater than y");
    }
}