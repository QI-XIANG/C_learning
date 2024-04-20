#include <stdio.h>

//Short Hand If...Else (Ternary Operator)
int main(){
    
    int time = 20;
    if(time < 18){
        printf("Good day.\n");
    }else{
        printf("Good evening.\n");
    }//ouput: Good evening.
    
    //Short Hand If...Else (Ternary Operator)
    printf("%d", (time < 18) ? 1 : 0); // Returns 0 because 20 is not less than 18
    
    return 0; //will not show in the terminal
}