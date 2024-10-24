/*
QUESTION:
Write a program to calculate the area of different geometrical figures like Circle, triangle, trapezoid, square, and rectangle. The program should ask the user to enter the code for which the user wants to find out the area.

Input: Geometrical Figures: 't' for triangle, 'z' for trapezoid, 'c' for circle, 's' for square, 'r' for rectangle.
Enter your choice: s
Enter the side of the square: 5
Output: Area of the square: 25.
*/

#include <stdio.h>

int main() {
    char choice;
    float base, height, area, length, width, radius, side;

    printf("Geometrical Figures: 't' for triangle, 'z' for trapezoid, 'c' for circle, 's' for square, 'r' for rectangle\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 't':
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        case 'z':
            printf("Enter the lengths of the two parallel sides and height of the trapezoid: ");
            float side1, side2;
            scanf("%f %f %f", &side1, &side2, &height);
            area = 0.5 * (side1 + side2) * height;
            printf("Area of the trapezoid: %.2f\n", area);
            break;
        case 'c':
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        case 's':
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square: %.2f\n", area);
            break;
        case 'r':
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
/*
OUTPUT:
Area of the square: 25.
*/
