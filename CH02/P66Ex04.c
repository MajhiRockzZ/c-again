#include <stdio.h>
#include <conio.h>

/* Write a program to find whether the given number is even or odd. */

int main()
{
    int num;
    printf("\n Enter any number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\n %d is an even number", num);
    else
        printf("\n %d is an odd number", num);
    return 0;
}