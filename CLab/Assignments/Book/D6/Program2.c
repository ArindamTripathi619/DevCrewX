/*
A cloth showroom has announced the following seasonal discounts on purchase of
items:
Purchase Amount         Discount
                Mill Cloth      Handloom Items
    0-100           -               5.0%
    101-200         5.0%            7.5%
    201-300         7.5%            10.0%
    Above 300       10.0%           15.0%
WAP using switch statement to compute the net amount to be paid by a
customer. [Page No: 168, Exercise 6.8]
Input: Enter the purchase amount value: 500
Enter the type of cloth [M for Mill cloth, H for Handloom items]: M

Output: Net amount to be paid: 450
*/

#include <stdio.h>

int main() {
    float purchase_amount, discount = 0.0, net_amount;
    char cloth_type;

    // Input: Enter the purchase amount and the type of cloth
    printf("Enter the purchase amount value: ");
    scanf("%f", &purchase_amount);

    printf("Enter the type of cloth [M for Mill cloth, H for Handloom items]: ");
    scanf(" %c", &cloth_type);  // Added space before %c to handle any newline

    // Use switch statement to apply the appropriate discount
    switch (cloth_type) {
        case 'M':
        case 'm':
            if (purchase_amount > 300)
                discount = 10.0;
            else if (purchase_amount > 200)
                discount = 7.5;
            else if (purchase_amount > 100)
                discount = 5.0;
            else
                discount = 0.0;
            break;

        case 'H':
        case 'h':
            if (purchase_amount > 300)
                discount = 15.0;
            else if (purchase_amount > 200)
                discount = 10.0;
            else if (purchase_amount > 100)
                discount = 7.5;
            else
                discount = 5.0;
            break;

        default:
            printf("Invalid cloth type entered!\n");
            return 1;  // Exit the program if invalid input
    }

    // Calculate the net amount after applying the discount
    net_amount = purchase_amount - (purchase_amount * discount / 100.0);

    // Output: Display the net amount to be paid
    printf("Net amount to be paid: %.2lf\n", net_amount);

    return 0;
}
