#include <stdio.h>

int main()
{
    int num, temp;
    printf("\n Enter the number: ");
    scanf("%d", &num);
    printf("\n The reversed number is: ");

    while (num != 0)
    {
        temp = num % 10;
        printf("%d", temp);
        num = num / 10;
    }
    return 0;
}