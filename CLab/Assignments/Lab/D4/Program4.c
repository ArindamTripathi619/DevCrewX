/*
QUESTION:
The marked price, discount, and cost price are entered through the keyboard. Sometimes the seller gets profit or incurs loss depending on the discount. WAP to determine whether the seller has made a profit or incurred a loss. Also determine how much profit or loss was incurred as a percentage.

Input 1: Enter the cost price: 80
         Enter the marked price: 100
         Enter the discount percentage: 25
Output 1: Seller made a loss of 6.25%.
         
Input 2: Enter the cost price: 80
         Enter the marked price: 100
         Enter the discount percentage: 10
Output 2: Seller made a profit of 12.50%.
*/

#include <stdio.h>

int main() {
    float cost_price, marked_price, discount_percentage, selling_price, profit_or_loss_percentage;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    
    printf("Enter the marked price: ");
    scanf("%f", &marked_price);
    
    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);

    selling_price = marked_price * (1 - discount_percentage / 100);

    if (selling_price > cost_price) {
        profit_or_loss_percentage = ((selling_price - cost_price) / cost_price) * 100;
        printf("Seller made a profit of %.2f%%.\n", profit_or_loss_percentage);
    } else {
        profit_or_loss_percentage = ((cost_price - selling_price) / cost_price) * 100;
        printf("Seller made a loss of %.2f%%.\n", profit_or_loss_percentage);
    }

    return 0;
}
/*
OUTPUT:
Seller made a loss of 6.25%.
Seller made a profit of 12.50%.
*/
