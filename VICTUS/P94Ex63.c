#include <stdio.h>
#include <math.h>

/* Write a program to calculate sum
 * of cubes of first n numbers. */

int main() {
    int i, n;
    int term, sum = 0;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = pow(i, 3);
        sum += term;
    }
    printf("\n 1^3 + 2^3 + 3^3 + ... .... = %d", sum);
    return 0;
}
