/*
QUESTION:
A cloth showroom has announced the following seasonal discounts on purchase of items:

Purchase Amount         Mill cloth Discount      Handloom items Discount
0 - 100                        5.0%                            5.0%
101 - 200                      5.0%                            7.5%
201 - 300                      7.5%                           10.0%
Above 300                      10.0%                          15.0%

WAP using if statement to compute the net amount to be paid by a customer.

Input: Enter the purchase amount value: 500
       Enter the type of cloth [M for Mill cloth, H for Handloom items]: M
Output: Net amount to be paid: 450.
*/

#include <stdio.h>

int main() {
    float amount, discount = 0;
    char cloth_type;

    printf("Enter the purchase amount value: ");
    scanf("%f", &amount);
    
    printf("Enter the type of cloth [M for Mill cloth, H for Handloom items]: ");
    scanf(" %c", &cloth_type);

    if (cloth_type == 'M') {
        if (amount > 300) discount = 0.10;
        else if (amount > 200) discount = 0.075;
        else if (amount > 100) discount = 0.05;
    } else if (cloth_type == 'H') {
        if (amount > 300) discount = 0.15;
        else if (amount > 200) discount = 0.10;
        else if (amount > 100) discount = 0.075;
    } else {
        printf("Invalid cloth type.\n");
        return 1;
    }

    printf("Net amount to be paid: %.2f\n", amount * (1 - discount));

    return 0;
}
/*
OUTPUT:
Net amount to be paid: 450.
*/
