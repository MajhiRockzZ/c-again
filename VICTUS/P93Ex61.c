#include <stdio.h>

/* Write a program to sum the series 1/2 + 2/3 + ...n/(n + 1) */

int main() {
    int n;
    float sum = 0.0, i;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1.0; i <= n; i++) {
        sum += i / (i + 1);
    }
    printf("\n The sum of series 1/2 + 2/3 + .... = %.4f", sum);
    return 0;
}
