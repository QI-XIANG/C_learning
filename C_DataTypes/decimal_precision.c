#include <stdio.h>

int main(){
    //Create variables
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); //Output: 3.500000
    printf("%lf\n", myDoubleNum); //Output: 19.990000

    //If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point
    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.3f\n", myFloatNum); // Only show 3 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits
    
    return 0;
}