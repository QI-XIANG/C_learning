#include <stdio.h>

int main(){
    char myGrade = 'A';
    printf("%c\n", myGrade);

    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    //To store multiple characters (or whole words), use strings
    char myText[] = "Hello";
    printf("%s", myText);   

    return 0;
}