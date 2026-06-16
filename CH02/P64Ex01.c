#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    printf("\n Enter the age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("\n You are eligible to vote");
    getch();
    return 0;
}