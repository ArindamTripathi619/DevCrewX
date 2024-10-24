/*
QUESTION:
WAP to find the roots of a quadratic equation ax^2 + bx + c = 0 using if-else statements. Consider different cases based on the discriminant.

Input 1: Input values for a, b, and c: 1 8 3
Output 1: The Roots are real & unequal. Roots are -0.39 and -7.61.
Input 2: Input values for a, b, and c: 3 5 7
Output 2: Roots are imaginary.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Input values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (a == 0 && b == 0) {
        printf("No solution\n");
    } else if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The Roots are real & unequal.\nRoots are %.2f and %.2f.\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The Roots are real & equal.\nRoot is %.2f.\n", root1);
    } else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
/*
OUTPUT:
The Roots are real & unequal. Roots are -0.39 and -7.61.
Roots are imaginary.
*/
