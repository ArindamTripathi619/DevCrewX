/*
QUESTION:
WAP using switch statement to compute the net amount to be paid by a customer based on purchase amount and cloth type.

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

    switch (cloth_type) {
        case 'M':
            if (amount > 300) discount = 0.10;
            else if (amount > 200) discount = 0.075;
            else if (amount > 100) discount = 0.05;
            break;
        case 'H':
            if (amount > 300) discount = 0.15;
            else if (amount > 200) discount = 0.10;
            else if (amount > 100) discount = 0.075;
            break;
        default:
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
