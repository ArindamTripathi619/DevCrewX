/*
QUESTION:
WAP by designing a recursive function to print the prime factors of a number.
*/

#include <stdio.h>

// Recursive function to print prime factors
void primeFactors(int n, int divisor) {
    if (n < 2) return;
    if (n % divisor == 0) {
        printf("%d ", divisor);
        primeFactors(n / divisor, divisor);
    } else {
        primeFactors(n, divisor + 1);
    }
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the prime factors
    printf("Prime factors of %d are: ", num);
    primeFactors(num, 2);
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter a number: 100
Prime factors of 100 are: 2 2 5 5
*/
