#include <stdio.h>

/* Write a program to find the largest of two numbers.*/

int main()
{
    int a, b, large;
    printf("\n Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        large = a;
    else
        large = b;
    printf("\n LARGE = %d", large);
    return 0;
}