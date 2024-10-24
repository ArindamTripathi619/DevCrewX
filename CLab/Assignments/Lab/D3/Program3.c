/*
QUESTION:
WAP to calculate the area of a circle while taking the radius as user input.
Input: Enter the radius of the circle: 11
Output: The area is: 380.12
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area is: %.2f\n", area);
    return 0;
}
/*
OUTPUT:
Enter the radius of the circle: 11
The area is: 380.12
*/
