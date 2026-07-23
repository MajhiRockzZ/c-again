#include <stdio.h>

/* Write a program to calculate GCD (Greatest Common Divisor)
 * using recursive functions. */

int GCD(int, int); // FUNCTION DECLARATION

int main() {
    int num1, num2, res;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    res = GCD(num1, num2); // FUNCTION CALL
    printf("GCD of %d and %d = %d", num1, num2, res);
    return 0;
}

int GCD(int x, int y) {
    // FUNCTION DEFINITION
    int rem;
    rem = x % y;
    if (rem == 0)
        return y;
    else
        return (GCD(y, rem)); // FUNCTION CALL
}
