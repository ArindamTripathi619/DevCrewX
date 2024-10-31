/*
QUESTION:
Write a function that will return the number of zeros present in a positive integer.
*/

#include <stdio.h>

// Function to count zeros in a number
int countZeros(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the number of zeros
    printf("Number of zeros in %d = %d\n", num, countZeros(num));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 12010
Number of zeros in 12010 = 2
*/
