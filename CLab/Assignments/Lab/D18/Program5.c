/*
QUESTION:
WAP to calculate x^y by writing a recursive user-defined function.
*/

#include <stdio.h>

// Recursive function to calculate power
int power(int x, int y) {
    if (y == 0) return 1;
    return x * power(x, y - 1);
}

int main() {
    int x, y;
    
    // Input the base and exponent
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    
    // Display the result of x^y
    printf("%d to the power %d = %d\n", x, y, power(x, y));
    
    return 0;
}

/*
OUTPUT:
Enter the value of x and y: 2 5
2 to the power 5 = 32
*/
