/*
QUESTION:
Enter 3 sides of a triangle. WAP to check whether those sides form a valid triangle or not (it is valid if the sum of the two sides is greater than the largest of three sides). Then classify the given triangle as isosceles, equilateral, right-angled, or scalene.

Input: Enter 3 sides of a triangle: 7 7 7
Output: This is an equilateral triangle.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("This is an equilateral triangle.\n");
        } else if (a == b || b == c || c == a) {
            printf("This is an isosceles triangle.\n");
        } else {
            printf("This is a scalene triangle.\n");
        }
    } else {
        printf("These sides do not form a valid triangle.\n");
    }
    return 0;
}
/*
OUTPUT:
This is an equilateral triangle.
*/
