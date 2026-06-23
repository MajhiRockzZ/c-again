#include <stdio.h>

/* Write a program to sum the series 1/2 + 2/3 + ...n/(n + 1) */

int main()
{
    int n;
    float sum = 0.0, a, i;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1.0; i <= n; i++)
    {
        a = i / (i + 1);
    }
    printf("\n The sum of series 1/2 + 2/3 + .... = %f", n, n + 1, sum);
    return 0;
}