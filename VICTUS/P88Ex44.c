#include <stdio.h>
#include <conio.h>

int main()
{
    int i, m, n;

    printf("\n Enter the value of m: ");
    scanf("%d", &m);

    printf("\n Enter the value of n:");
    scanf("%d", &n);
    for (i = m; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("\n %d is even", i);
        else
            printf("\n %d is odd", i);
    }
    return 0;
}