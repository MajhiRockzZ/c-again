#include <stdio.h>
#include <math.h>

/* Write a program to enter a decimal number.
 * Calculate and display the octal equivalent
 * of this number.*/

int main() {
    int decimal_num, octal_num = 0, i = 0;
    printf("\n Enter the decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        int remainder = decimal_num % 8;
        octal_num += remainder * pow(10, i);
        decimal_num = decimal_num / 8;
        i++;
    }
    printf("\n The octal equivalent = %d", octal_num);
    return 0;
}
