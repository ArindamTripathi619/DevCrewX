/*
QUESTION:
WAP to input the distance travelled by a car and the fuel consumed. Next, compute the mileage of the car.

Input: Enter the distance travelled by the car (in km): 275
       Enter the fuel consumed (in liters): 23
Output: Mileage of the car = 11.95 per liter.
*/

#include <stdio.h>

int main() {
    float distance, fuel, mileage;
    printf("Enter the distance travelled by the car (in km): ");
    scanf("%f", &distance);
    printf("Enter the fuel consumed (in liters): ");
    scanf("%f", &fuel);

    mileage = distance / fuel;
    printf("Mileage of the car = %.2f km/l\n", mileage);

    return 0;
}
/*
OUTPUT:
Mileage of the car = 11.95 km/l
*/
