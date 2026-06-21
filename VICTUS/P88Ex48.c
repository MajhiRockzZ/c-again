#include <stdio.h>

int main()
{
    int num, i;
    int primes = 0, composites = 0, flag = 0;

    printf("\n Enter -1 to exit... .");
    printf("\n\n Enter any number:");
    scanf("%d", &num);

    do
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            primes++;
        else
            composites++;
        flag = 0;
        printf("\n\n Enter any number: ");
        scanf("%d", &num);
    } while (num != -1);

    printf("\n Count of prime numbers entered = %d", primes);
    printf("\n Count of composite numbers entered = %d", composites);
    return 0;
}