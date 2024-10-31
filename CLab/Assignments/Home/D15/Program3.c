/*
QUESTION:
WAP to test whether a number n is a palindrome number or not.
*/

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter a number: 1221
1221 is a palindrome number.

OUTPUT 2:
Enter a number: 121
121 is not a palindrome number.
*/
