/*
QUESTION:
WAP to convert temperature from centigrade to Fahrenheit scale.
Input: Enter the temperature in Centigrade: 30
Output: The given temperature in Fahrenheit: 86
*/

#include <stdio.h>

int main() {
    float centigrade, fahrenheit;
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &centigrade);
    fahrenheit = (centigrade * 9 / 5) + 32;
    printf("The given temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
/*
OUTPUT:
Enter the temperature in Centigrade: 30
The given temperature in Fahrenheit: 86
*/
