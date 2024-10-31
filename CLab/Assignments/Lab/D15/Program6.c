/*
QUESTION:
WAP to calculate the sum of the digits of any given integer by designing a function.
*/

#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the sum of digits
    printf("Sum of the digits of %d = %d\n", num, sumOfDigits(num));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 345
Sum of the digits of 345 = 12
*/
