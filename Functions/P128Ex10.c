#include <stdio.h>
#include <math.h>

/* Write a program to sum the series -- 1/1!+4/2!+27/3!+... */

int Fact(int);

int main() {
    int n, i, NUM, DENO;
    float sum = 0.0;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        NUM = pow(i, i);
        DENO = Fact(i);
        sum += (float) NUM / DENO;
    }
    printf("\n 1/1! + 4/2! + 27/3! + .... = %.2f", sum);
    return 0;
}

int Fact(int num) {
    int f = 1, i;
    for (i = num; i >= 1; i--)
        f = f * i;
    return f;
}
