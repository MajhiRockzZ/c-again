#include <stdio.h>
#include <math.h>

/* Write a program to sum th series 1/1^2 + 1/2^2 + ... 1/n^2. */

int main() {
    int n;
    float sum = 0.0, a, i;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1.0; i <= n; i++) {
        a = 1 / pow(i, 2);
        sum = sum + a;
    }
    printf("\n The sum of series 1/1^2 + 1/2^2 + ... 1/n^2 = %.4f", sum);
    return 0;
}
