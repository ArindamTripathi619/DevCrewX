/*
QUESTION:
WAP to calculate the sum of the digits of any given integer until it becomes a single-digit number.
*/

#include <stdio.h>

// Function to calculate sum of digits until a single digit is obtained
int singleDigitSum(int num) {
    int sum;
    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the single digit sum
    printf("Sum of the digits until single digit = %d\n", singleDigitSum(num));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 34598
Sum of the digits until single digit = 2
*/
