#include <stdio.h>

//function declarition
int sum(int k);

//define main function
int main(){
    int result = sum(10);
    printf("%d", result);
    return 0;
}

//recurison function definition
int sum(int k){
    if(k > 0){
        return k + sum(k-1);
    }else{
        return 0;
    }
}