#include <stdio.h>

/* Write a program to convert time to minutes. */

int convert_time_in_mins(int hrs, int minutes);

int main()
{
    int hrs, minutes, total_mins;
    printf("\n Enter hours and minutes: ");
    scanf("%d %d", &hrs, &minutes);
    total_mins = convert_time_in_mins(hrs, minutes);
    printf("\n Total minutes = %d", total_mins);
    return 0;
}

int convert_time_in_mins(int hrs, int minutes)
{
    int mins;
    mins = hrs * 60 + minutes;
    return mins;
}