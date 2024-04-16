#include <stdio.h>

int main(){
    //Comparison Operators
    int x = 5;
    int y = 3;
    printf("%d\n", x == y); // 0
    printf("%d\n", x != y); // 1
    printf("%d\n", x > y); // returns 1 (true) because 5 is greater than 3

    // Logical Operators
    int a = 5;
    int b = 20;
    int c = 10;
    printf("%d\n", a > b && a > c); // 0
}