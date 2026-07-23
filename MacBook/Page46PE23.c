#include <stdio.h>

/* 23. Write a program that display the size of every data type.*/

int main() {
    printf("\n The size of short integer is: %lu", sizeof(short int));
    printf("\n The size of unsigned integer is: %lu", sizeof(unsigned int));
    printf("\n The size of signed integer is: %lu", sizeof(signed int));
    printf("\n The size of integer is: %lu", sizeof(int));
    printf("\n The size of long integer is: %lu", sizeof(long int));
    printf("\n");
    printf("\n The size of character is: %lu", sizeof(char));
    printf("\n The size of unsigned character is: %lu", sizeof(unsigned char));
    printf("\n The size of signed character is: %lu", sizeof(signed char));
    printf("\n");
    printf("\n The size of floating point number is: %lu", sizeof(float));
    printf("\n The size of double number is: %lu", sizeof(double));

    printf("\n");
    return 0;
}
