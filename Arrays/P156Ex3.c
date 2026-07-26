#include <stdio.h>

/* Write a program to find mean of n numbers using arrays. */

int main()
{
    int i, n, arr[20], sum = 0;
    float mean = 0.0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf(" Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
        sum += arr[i];
    mean = sum / n;
    printf("The sum of the array elements = %d", sum);
    printf("\nThe mean of the array elements = %.2f", mean);
    return 0;
}