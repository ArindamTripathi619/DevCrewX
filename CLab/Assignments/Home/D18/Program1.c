/*
QUESTION:
Write a C program to count the number of digits in an integer by using a recursive function.
*/

#include <stdio.h>

// Recursive function to count digits in an integer
int countDigits(int n) {
    if (n == 0) 
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int num;
    
    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handle case for 0 explicitly as it has 1 digit
    if (num == 0) {
        printf("Number of digits in %d = 1\n", num);
    } else {
        // Display the number of digits
        printf("Number of digits in %d = %d\n", num, countDigits(num < 0 ? -num : num));
    }
    
    return 0;
}

/*
OUTPUT:
Enter an integer: 4567
Number of digits in 4567 = 4

Enter an integer: 0
Number of digits in 0 = 1
*/
