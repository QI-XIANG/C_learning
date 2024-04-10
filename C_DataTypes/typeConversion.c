#include <stdio.h>

int main(){

    int x = 5;
    int y = 2;
    int sum1 = x / y;

    printf("%d\n", sum1); // Output: 2

    // Automatic conversion: int to float
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.000000

    // Automatic conversion: float to int
    int myInt = 9.99;
    printf("%d\n", myInt); // 9

    float sum2 = 5 / 2;
    printf("%f\n", sum2); // 2.000000

    // Manual conversion: int to float
    float sum3 = (float) 5 / 2;
    printf("%f\n", sum3); // 2.500000
    printf("%.1f\n", sum3); // 2.5

    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    /* Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate */
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);

    return 0;
}