#include <stdio.h>

int main()
{
    int marks;
    printf("\n Enter the marks obtained: ");
    scanf("%d", &marks);

    if (marks >= 75)
        printf("\n DISTINCTION");
    else if (marks >= 60 && marks < 75)
        printf("\n FIRST DIVISION");
    else if (marks >= 50 && marks < 60)
        printf("\n SECOND DIVISION");
    else if (marks >= 40 && marks < 50)
        printf("\n THIRD DIVISION");
    else
        printf("\n FAIL");
    return 0;
}