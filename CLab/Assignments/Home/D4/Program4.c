/*
QUESTION:
WAP to enter the principal, time, and rate of interest, then calculate compound interest.

Input: Enter the principal: 1000
       Enter the time: 5
       Enter the rate of interest: 5
Output: Compound Interest: 402.55
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate, compound_interest;

    printf("Enter the principal: ");
    scanf("%f", &principal);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    compound_interest = principal * (pow((1 + rate / 100), time) - 1);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
/*
OUTPUT:
Enter the principal: 2000
Enter the time (in years): 2
Enter the rate of interest: 5
Compound Interest: 205.00
*/
