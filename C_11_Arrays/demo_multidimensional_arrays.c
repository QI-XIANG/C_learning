#include <stdio.h>

int main(){
    //A multidimensional array is basically an array of arrays.
    //declare multidimensional array
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    printf("%d\n", matrix[0][2]); //output: 2

    //change element in a 2D array
    matrix[0][0] = 9;

    printf("%d\n", matrix[0][0]); //output: 9

    //loop through a 2D array
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d\n", matrix[i][j]);
        }
    }
}