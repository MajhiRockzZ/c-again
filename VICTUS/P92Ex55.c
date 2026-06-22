#include <stdio.h>
#include <math.h>

/* Write a program to enter a binary number.
 * Calculate and display the decimal equivalent
 * of this number */

int main() {
    int decimal_num = 0, remainder, binary_num, i = 0;
    printf("\n Enter the binary number: ");
    scanf("%d", &binary_num);

    while (binary_num != 0) {
        remainder = binary_num % 10;
        decimal_num += remainder * pow(2, i);
        binary_num = binary_num / 10;
        i++;
    }
    printf("\n The decimal equivalent of = %d", decimal_num);
    return 0;
}
