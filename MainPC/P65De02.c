#include <stdio.h>

int main()
{
    int num;
    char ch;
    printf("\n Enter an int and a char value: ");
    // Check the return value of scanf()
    if (scanf("%d %c", &num, &ch) == 2)
        printf("\n Data read successfully");
    else
        printf("\n Error in data input");

    return 0;
}