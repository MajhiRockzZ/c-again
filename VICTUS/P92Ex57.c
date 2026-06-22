#include <stdio.h>
#include <math.h>

/* Write a program to enter a hexadecimal number.
 * Calculate and display the decimal equivalent
 * of this number. */

int main() {
    int decimal_num = 0, remainder, hex_num, i = 0;
    printf("\n Enter the hexadecimal number: ");
    scanf("%d", &hex_num);
    while (hex_num != 0) {
        remainder = hex_num % 10;
        decimal_num += remainder * pow(16, i);
        hex_num = hex_num / 10;
        i++;
    }
    printf("\n The decimal equivalent = %d", decimal_num);
    return 0;
}
