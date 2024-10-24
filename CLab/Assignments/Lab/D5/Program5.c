/*
QUESTION:
WAP to calculate the electric bill by inputting the previous and present meter reading. The bill amount is calculated as Rs 1.40 per unit for the first 100 units, Rs 2.50 per unit for the next 100 units, and Rs 3.20 per unit for the rest.

Input: Enter the previous meter reading: 3500
       Enter the current meter reading: 4000
Output: Bill Amount: 1350.
*/

#include <stdio.h>

int main() {
    int previous, current, units;
    float bill = 0;

    printf("Enter the previous meter reading: ");
    scanf("%d", &previous);
    printf("Enter the current meter reading: ");
    scanf("%d", &current);

    units = current - previous;

    if (units <= 100) {
        bill = units * 1.40;
    } else if (units <= 200) {
        bill = 100 * 1.40 + (units - 100) * 2.50;
    } else {
        bill = 100 * 1.40 + 100 * 2.50 + (units - 200) * 3.20;
    }

    printf("Bill Amount: %.2f\n", bill);

    return 0;
}
/*
OUTPUT:
Bill Amount: 1350.
*/
