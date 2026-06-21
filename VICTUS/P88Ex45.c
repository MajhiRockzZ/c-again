#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, sum = 0;
    float avg = 0.0;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum = sum + i;
    avg = sum / n;
    printf("\n The sum of first n natural numbers = %d", sum);
    printf("\n The average of first n natural number = %.2f", avg);
    return 0;
}