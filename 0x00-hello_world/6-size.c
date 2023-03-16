#include<stdio.h>
/*
* Write a C program to print types sizes 
*/
int main() {
    int intType;
    float floatType;
    char charType;
    long int longintType;
    long long int longlongintType;
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu byte\n", sizeof(longintType));
    printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    return 0;
}
