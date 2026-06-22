#include <stdio.h>
#include <math.h>

/* Write a program to enter a decimal number.
 * Calculate and display the binary equivalent
 * of this number. */

int main()
{
    int decimal_num, remainder, binary_num = 0, i = 0;
    printf("\n Enter the decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num != 0)
    {
        remainder = decimal_num % 2;
        binary_num += remainder * pow(10, i);
        decimal_num = decimal_num / 2;
        i++;
    }
    printf("\n The binary equivalent = %d", binary_num);
    return 0;
}