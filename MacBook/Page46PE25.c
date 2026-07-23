#include <stdio.h>

/* 25. Write a program to calculate the bill amount for
 * an item given its quantity sold, value, discount, and tax.
 */

int main() {
    int qty;
    float total_amt, amt, sub_total, discount_amt, tax_amt, val, discount, tax;

    printf("Enter the quantity of item sold: ");
    scanf("%d", &qty);
    printf("Enter the value of item (Rs.): ");
    scanf("%f", &val);
    printf("Enter the discount percentage: ");
    scanf("%f", &discount);
    printf("Enter the tax percentage: ");
    scanf("%f", &tax);

    amt = qty * val;
    discount_amt = (amt * discount) / 100.0;
    sub_total = amt - discount_amt;
    tax_amt = (sub_total * tax) / 100.0;
    total_amt = sub_total + tax_amt;

    printf("\n******** BILL ********\n");
    printf("Quantity Sold       : %d\n", qty);
    printf("Price per Item      : Rs. %7.2f\n", val);
    printf("------------------------------\n");
    printf("Amount              : Rs. %7.2f\n", amt);
    printf("Discount (%5.2f%%)  : Rs.-%7.2f\n", discount, discount_amt);
    printf("Discounted Total    : Rs. %7.2f\n", sub_total);
    printf("Tax      (%5.2f%%)  : Rs.+%7.2f\n", tax, tax_amt);
    printf("------------------------------\n");
    printf("Total Amount        : Rs. %7.2f\n", total_amt);
    printf("******************************\n");

    return 0;
}
