/*
QUESTION:
WAP to calculate the area of a triangle by reading the base and height from the user.
Input: Enter the height and base of the triangle: 12 10
Output: The area of the triangle is: 60
*/

#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter the height and base of the triangle: ");
    scanf("%f %f", &height, &base);
    area = 0.5 * base * height;
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}
/*
OUTPUT:
Enter the height and base of the triangle: 12 10
The area of the triangle is: 60
*/
