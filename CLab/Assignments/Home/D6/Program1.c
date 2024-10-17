#include <stdio.h>
int main() {
    int a, b, c, greatest;
    // Input: Three distinct integers
    printf("Enter three distinct integers: ");
    scanf("%d %d %d", &a, &b, &c);
    // Determine the greatest integer
    greatest = (a > b && a > c) ? a : (b > c) ? b : c;
    // Output the result
    printf("Greatest integer is %d\n", greatest);
    return 0;
}
/*
    Enter three distinct integers: 6 9 4
    Greatest integer is 9
*/  