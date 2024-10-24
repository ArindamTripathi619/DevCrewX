/*
QUESTION:
WAP to compute the useful life in years given the original cost, depreciation rate, and the scrap value.
Formula: P = c(1 - d)^n
Input: Enter the original cost of the item: 3000
       Enter the rate of depreciation (per year): 200
       Enter the scrap value of the item: 2200
Output: Useful life of the item = 4 years
*/

#include <stdio.h>
#include <math.h>

int main() {
    double c, d, P;
    int n = 0;
    printf("Enter the original cost of the item: ");
    scanf("%lf", &c);
    printf("Enter the rate of depreciation (per year): ");
    scanf("%lf", &d);
    printf("Enter the scrap value of the item: ");
    scanf("%lf", &P);

    d = d / c;  // Convert depreciation to percentage
    double value = c;

    while (value > P) {
        value = value * (1 - d);
        n++;
    }

    printf("Useful life of the item = %d years\n", n);
    return 0;
}

/*
OUTPUT:
Enter the original cost of the item: 3000
Enter the rate of depreciation (per year): 200
Enter the scrap value of the item: 2200
Useful life of the item = 4 years
*/
