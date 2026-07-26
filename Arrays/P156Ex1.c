#include <stdio.h>

/* Write a program to read and display n numbers using an array. */

int main()
{
    int i = 0, n, arr[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are ");
    for (i = 0; i < n; i++)
        printf("Arr[%d] = %d | ", i, arr[i]);
    return 0;
}