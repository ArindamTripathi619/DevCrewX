/*
QUESTION:
WAP to enter the principal, time, and rate of interest, then calculate simple interest.

Input: Enter the principal: 1000
       Enter the time in years: 5
       Enter the rate of interest in percentage: 5
Output: Simple Interest: 250
*/

#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    printf("Enter the principal: ");
    scanf("%f", &principal);
    
    printf("Enter the time in years: ");
    scanf("%f", &time);
    
    printf("Enter the rate of interest in percentage: ");
    scanf("%f", &rate);

    simple_interest = (principal * time * rate) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
/*
OUTPUT:
Simple Interest: 250
*/
