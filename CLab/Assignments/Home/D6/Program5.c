#include <stdio.h>

int main() {
    char choice;
    float base, height, radius, side, area, length, breadth;

    // Input: Choose geometrical figure
    printf("Geometrical Figures:\n");
    printf("1. 't' for triangle\n");
    printf("2. 'z' for trapezoid\n");
    printf("3. 'c' for circle\n");
    printf("4. 's' for square\n");
    printf("5. 'r' for rectangle\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    // Calculate area based on user's choice
    switch (choice) {
        case 't':
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;

        case 'z':
            printf("Enter the lengths of the two parallel sides and height of the trapezoid: ");
            float a, b;
            scanf("%f %f %f", &a, &b, &height);
            area = 0.5 * (a + b) * height;
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
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle: %.2f\n", area);
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
/*
    Geometrical Figures:
    1. 't' for triangle
    2. 'z' for trapezoid
    3. 'c' for circle
    4. 's' for square
    5. 'r' for rectangle
    Enter your choice: r
    Enter the length and breadth of the rectangle: 5 9
    Area of the rectangle: 45.00
*/