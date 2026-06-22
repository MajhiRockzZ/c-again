#include <stdio.h>

int main()
{
    int num, temp, sumofdigits = 0;
    printf("\n Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10;
        sumofdigits += temp;
        num = num / 10;
    }

    printf("\n The sum of digits = %d", sumofdigits);
    return 0;
}