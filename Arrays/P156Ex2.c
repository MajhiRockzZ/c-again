#include <stdio.h>
#include <stdlib.h>

/* Write a program to read and display n random numbers using an array. */

#define MAX 10

int main()
{
    int arr[MAX], i, RandNo;

    for (i = 0; i < MAX; i++)
    {
        // Scale the random number in the range 0 to MAX - 1
        RandNo = rand() % MAX;
        // rand() is a pre-defined function
        arr[i] = RandNo;
    }

    printf(" The contents of the array are: \n");
    for (i = 0; i < MAX; i++)
        printf("\t %d", arr[i]);
    return 0;
}