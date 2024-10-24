/*
QUESTION:
WAP to calculate area of a triangle whose three sides are given.
Input: Enter three sides of a triangle: 5 9 6
Output: Area of the triangle: 14.142
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("Area of the triangle: %.3f\n", area);
    return 0;
}
/*
OUTPUT:
Enter three sides of a triangle: 5 9 6
Area of the triangle: 14.142
*/
