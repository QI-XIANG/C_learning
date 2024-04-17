#include <stdio.h>
#include <string.h>
/*C also has many useful string functions, which can be used to perform certain operations on strings.
To use them, you must include the <string.h> header file in your program:*/
int main(){
    //declare char array as string
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet)); //output: 26
    printf("%d\n", sizeof(alphabet)); //output: 27

    char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet2)); //output: 26
    printf("%d\n", sizeof(alphabet2)); //output: 50

    //concatenate strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    //concatenate str2 to str1
    //Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example).
    strcat(str1, str2);
    printf("%s\n", str1); //output: Hello World!

    //copy strings
    char str3[20] = "Hello, World!";
    char str4[20];
    //copy str3 to str4
    strcpy(str4, str3);
    printf("%s\n", str4); //output: Hello, World!

    //compare strings
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";

    //compare str5 and str6, and print the result
    printf("%d\n", strcmp(str5, str6)); //output: 0 (the strings are equal)

    //compare str5 and str7, and print the result
    printf("%d", strcmp(str5, str7)); //output: -1 (the strings are not equal)
}