#include <stdio.h>

int main()
{
    int x, y;
    printf("\n Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("\n The two numbers are equal\n");
    else if (x > y)
        printf("\n %d is greater than %d\n", x, y);
    else
        printf("\n %d is less than %d\n", x, y);
    return 0;
}