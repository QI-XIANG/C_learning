#include <stdio.h>

int main()
{
    const int myNum = 5; // myNum is a constant
    // myNum = 10; // Error: assignment of read-only variable 'myNum'

    // When you declare a constant variable, it must be assigned with a value
    const int minutesPerHour = 60;
    const float PI = 3.14; // PI is a constant
    printf("%d\n", myNum); // Output: 5
    printf("%f\n", PI);    // Output: 3.140000
    return 0;
}