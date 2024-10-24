/*
QUESTION:
WAP to find centigrade for a given Fahrenheit temperature.
Input: Enter the temperature in Fahrenheit: 86
Output: The given temperature in Centigrade: 30
*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The given temperature in Centigrade: %.2f\n", celsius);
    return 0;
}
/*
OUTPUT:
Enter the temperature in Fahrenheit: 86
The given temperature in Centigrade: 30
*/
