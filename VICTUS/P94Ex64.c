#include <stdio.h>
#include <math.h>

/* Write a program to calculate sum of squares
 * of first n even numbers. */

int main() {
    int i, n;
    int term, sum = 0;

    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            term = pow(i, 2);
            sum += term;
        }
    }
    printf("\n 2^2 + 4^2 + 6^2 + ... . . . . = %d", sum);
    return 0;
}
