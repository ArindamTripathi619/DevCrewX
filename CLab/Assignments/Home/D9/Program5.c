/*
QUESTION:
WAP to find out the sum of the series up to n terms (1 + 2^2 + 3^3 + ...). The user has to input the value of n, and the program calculates and outputs the sum.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long sum = 0;
    
    // Input the value of n
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += pow(i, i);
    }
    
    // Display the sum
    printf("Sum of the series up to %d terms: %lld\n", n, sum);
    
    return 0;
}

/*
OUTPUT:
Enter a Number: 5
Sum of the series up to 5 terms: 3413
*/
