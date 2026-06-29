#include <stdio.h>

/* Write a program to generate calendar of a month given
 * the start day of the week and the number of days in
 * that month. */

int main()
{
    int i, j, startDay, num_of_days;
    printf("\n Enter the starting day of the week(1 to 7): ");
    scanf("%d", &startDay);
    printf("\n Enter the number of days in that month: ");
    scanf("%d", &num_of_days);
    printf(" Sun Mon Tue Wed Thurs Fri Sat\n");
    printf("\n _____________________________");

    for (j = 1; j <= num_of_days; j++)
    {
        if (i > 6)
        {
            printf("\n");
            i = 1;
        }
        else
        {
            i++;
            printf("%2d ", j);
        }
    }
    return 0;
}