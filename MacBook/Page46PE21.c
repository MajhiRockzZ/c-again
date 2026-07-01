#include <stdio.h>

int main() {
    int num1, num2;
    float avg, dev1, dev2;
    printf("\n Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    avg = (num1 + num2) / 2;
    dev1 = num1 - avg;
    dev2 = num2 - avg;
    printf("\n AVERAGE = %.2f", avg);
    printf("\n Deviation of first number = %.2f", dev1);
    printf("\n Deviation of second number = %.2f", dev2);
    return 0;
}