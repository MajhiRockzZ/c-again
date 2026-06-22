#include <stdio.h>
#include <math.h>

int main() {
    int decimal_num = 0, remainder, octal_num, i = 0;
    printf("\n Enter the octal number: ");
    scanf("%d", &octal_num);
    while (octal_num != 0) {
        remainder = octal_num % 10;
        decimal_num += remainder * pow(8, i);
        octal_num = octal_num / 10;
        i++;
    }
    printf("\n The decimal equivalent = %d", decimal_num);
    return 0;
}
