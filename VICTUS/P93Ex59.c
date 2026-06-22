#include <stdio.h>

/* Write a program to sum the series 1 + 1/2 + 1/3 ... + 1/n. */

int main() {
    int n;
    float sum = 0.0, a, i;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1.0; i <= n; i++) {
        a = 1 / i;
        sum = sum + a;
    }

    printf("\n The sum of series 1/1 + 1/2 + .... + 1/%d = %.4f", n, sum);
    return 0;
}
