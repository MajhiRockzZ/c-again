#include <stdio.h>

#define MALE_BONUS_RATE 0.05f
#define FEMALE_BONUS_RATE 0.10f
#define LOW_SAL_BONUS_RATE 0.20f
#define LOW_SAL_THRESHOLD 10000.0f

int main(void)
{
    char ch;
    float sal, bonus, amt_to_be_paid;

    printf("Enter the sex of the employee (m/f): ");
    scanf(" %c", &ch); /* leading space skips leftover whitespace */

    printf("Enter the salary of the employee: ");
    scanf("%f", &sal);

    if (ch == 'm' || ch == 'M')
        bonus = MALE_BONUS_RATE * sal;
    else if (ch == 'f' || ch == 'F')
        bonus = FEMALE_BONUS_RATE * sal;
    else
    {
        printf("Invalid input. Please enter 'm' or 'f'.\n");
        return 1;
    }

    if (sal < LOW_SAL_THRESHOLD)
        bonus += LOW_SAL_BONUS_RATE * sal;

    amt_to_be_paid = sal + bonus;

    printf("\nSalary           : %.2f\n", sal);
    printf("Bonus            : %.2f\n", bonus);
    printf("********************\n");
    printf("Amount to be paid: %.2f\n", amt_to_be_paid);

    return 0;
}