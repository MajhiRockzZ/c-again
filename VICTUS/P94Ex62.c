#include <stdio.h>
#include <math.h>

/* Write a program to sum the series 1/1 + 2^2/2 + 3^2/3 + ... */

int main() {
    int n, NUM;
    float i, sum=0.0;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1.0; i<=n; i++) {
        NUM = pow(i, i);
        sum += (float) NUM/i;
    }
    printf("\n 1/1 + 4/2 + 27/3 + ... = %.4f", sum);
    return 0;
}