#include <stdio.h>

/* Write a program to calculate P(n/r). */

int Fact(int);

int main() {
    int n, r;
    float result;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    result = (float) Fact(n) / Fact(r);
    printf("P(n/r): p(%d)/(%d) = %.2f", n, r, result);
    return 0;
}

int Fact(int num) {
    int f = 1, i;
    for (i = num; i >= 1; i--)
        f = f * i;
    return f;
}
