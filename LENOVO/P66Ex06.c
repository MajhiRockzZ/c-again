#include <stdio.h>
#include <conio.h>

/* Write a program to enter a character and then determine whether it is a vowel or not. */

int main()
{
    char ch;

    printf("\n Enter any character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("\n %c is a VOWEL\n", ch);
    else
        printf("\n %c is not a VOWEL", ch);
    getch();
    return 0;
}