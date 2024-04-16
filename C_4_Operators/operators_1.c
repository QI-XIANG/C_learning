#include <stdio.h>

int main(){
    int myNum = 100 + 50;
    printf("%d\n", myNum); // 150

    int sum1 = 100 + 50; // 150
    int sum2 = sum1 + 250; // 400
    int sum3 = sum2 + sum2; // 800

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    int x = 5; //addition assignment operator (+=)
    x += 10; // x = x + 10
    printf("%d\n", x); // 15

    

}