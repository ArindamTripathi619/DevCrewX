/*
QUESTION:
WAP to find numbers between 1 and 100 that are divisible by the sum of their digits.
*/

#include <stdio.h>

// Function to calculate the sum of digits
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    printf("Numbers divisible by the sum of their digits between 1 and 100:\n");
    
    // Loop through numbers 1 to 100 and check divisibility
    for (int i = 1; i <= 100; i++) {
        if (i % sum_of_digits(i) == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

/*
OUTPUT:
Numbers divisible by the sum of their digits between 1 and 100:
1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63 70 72 80 81 84 90 100
*/
