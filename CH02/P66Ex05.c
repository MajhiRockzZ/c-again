#include <stdio.h>
#include <conio.h>

/* Write a program to enter any character. If the entered
 * character is in lower case then convert it into upper case and if it
 * is in a lower case character then convert it into upper case */

int main()
{
    char ch;
    printf("\n Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("\n The entered character was in upper case. In lower case it is: %c", (ch + 32));
    else
        printf("\n The entered character was in lower case. In upper case it is: %c", (ch - 32));
    return 0;
}