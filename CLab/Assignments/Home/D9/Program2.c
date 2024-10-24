/*
QUESTION:
WAP to check whether an input integer is a strong number or not. A strong number is one where the sum of factorials of its digits equals the number itself.
*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, original_num, digit;
    
    // Input the number
    printf("Enter a Number: ");
    scanf("%d", &num);
    
    original_num = num;
    
    // Calculate the sum of factorials of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    // Check if the number is a strong number
    if (sum == original_num) {
        printf("%d is a strong number.\n", original_num);
    } else {
        printf("%d is not a strong number.\n", original_num);
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter a Number: 145
145 is a strong number.

OUTPUT 2:
Enter a Number: 45
45 is not a strong number.
*/
