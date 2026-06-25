#include <stdio.h>

/* Write a program using for loop to calculate the
 * value of an investment, given the initial value
 * of investment and the annual interest.
 * Calculate the value of investment over a period
 * of time */

int main() {
    double initVal, futureVal, ROI;
    int yrs, i;

    printf("\n Enter the investment value: ");
    scanf("%lf", &initVal);

    printf("\n Enter the rate of interest: ");
    scanf("%lf", &ROI);

    printf("\n Enter the number of years for which investment has to be done: ");
    scanf("%d", &yrs);

    futureVal = initVal;
    printf("\n YEAR \t\t VALUE");
    printf("\n _____________________________");

    for (i = 1; i <= yrs; i++) {
        futureVal = futureVal * (1 + ROI / 100);
        printf("\n %d \t %.2lf", i, futureVal);
    }
    return 0;
}
