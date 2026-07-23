#include <stdio.h>

int Fibonacci(int);

int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("\n Fibonacci (%d) = %d", i, Fibonacci(i));
    return 0;
}

int Fibonacci(int num) {
    if (num <= 2)
        return 1;
    return (Fibonacci(num - 1) + Fibonacci(num - 2));
}
