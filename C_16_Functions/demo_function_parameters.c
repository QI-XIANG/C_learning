#include <stdio.h>

void myFunction1(char name[]){
    printf("Hello %s\n", name);
}

//multiple parameters
void myFunction2(char name [], int age){
    printf("Hello %s. You are %d years old.\n", name, age);
}

//pass arrays as function parameters
void myFunction3(int myNumbers[5]){
    for(int i = 0; i < 5; i++){
        printf("%d\n", myNumbers[i]);
    }
}

//return an integer
int myFunction4(int x){
    return 5 + x ;
}

//return an integer
int myFunction5(int x, int y){
    return x + y;
}

int main(){
    
    myFunction1("Liam");
    myFunction1("Jenny");
    myFunction1("Anja");
    
    //call multiple parameters function
    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);
    
    //call array function
    int myNumbers [5] = {10, 20, 30, 40, 50}; 
    myFunction3(myNumbers);

    printf("Result is: %d\n", myFunction4(3));

    printf("Result is: %d\n", myFunction5(5,6));

    return 0;

}