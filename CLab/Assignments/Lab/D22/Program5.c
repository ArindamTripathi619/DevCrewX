/*
QUESTION:
Write a C program to read an integer number as a string and find the sum of its digits. Store the digits in a dynamically allocated array and find their sum.
Input: Enter a number: 12345
Output: Sum of the digits of the number: 15
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char numStr[100];
    int *digits, len, sum = 0;

    // Input the number as a string
    printf("Enter a number: ");
    gets(numStr);

    len = strlen(numStr);

    // Dynamically allocate memory for the digits array
    digits = (int *)malloc(len * sizeof(int));
    if (digits == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store digits in the array and calculate the sum
    for (int i = 0; i < len; i++) {
        digits[i] = numStr[i] - '0'; // Convert character to integer
        sum += digits[i];
    }

    // Output the sum of digits
    printf("Sum of the digits of the number: %d\n", sum);

    // Free allocated memory
    free(digits);

    return 0;
}

/*
OUTPUT:
Enter a number: 12345
Sum of the digits of the number: 15
*/
