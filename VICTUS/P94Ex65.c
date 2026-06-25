#include <stdio.h>
#include <math.h>

/* Write a program to find whether the given
 * number is an armstrong number or not */

int main() {
    int num, sum = 0, r, n;
    printf("\n Enter the number: ");
    scanf("%d", &num);
    n = num;

    while (n > 0) {
        r = n % 10;
        sum += pow(r, 3);

        n = n / 10;
    }
    if (sum == num)
        printf("\n %d is an armstrong number", num);
    else
        printf("\n %d is not an armstrong number", num);
    return 0;
}
