/*
QUESTION:
WAP to convert a distance in meters entered through the keyboard into its equivalent kilometers and meters.

Input: Enter the distance in meters: 2430
Output: Entered distance = 2 Kilometers and 430 meters
*/

#include <stdio.h>

int main() {
    int meters, kilometers;

    printf("Enter the distance in meters: ");
    scanf("%d", &meters);

    kilometers = meters / 1000;
    meters = meters % 1000;

    printf("Entered distance = %d Kilometers and %d meters\n", kilometers, meters);

    return 0;
}
/*
OUTPUT:
Entered distance = 2 Kilometers and 430 meters
*/
