#include <stdio.h>
#include <math.h>

/* Write a program to enter a decimal number.
 * Calculate and display the hexadecimal equivalent
 * of this number. */

int main() {
    int decimal_num, hex_num = 0, i = 0, remainder;
    printf("\n Enter the decimal number: ");
    scanf("%d", &decimal_num);
    while (decimal_num != 0) {
        remainder = decimal_num % 16;
        hex_num += remainder * pow(10, i);
        decimal_num = decimal_num / 16;
        i++;
    }
    printf("\n The hexa decimal equivalent = %d", hex_num);
    return 0;
}
