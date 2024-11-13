/*
QUESTION:
Write a C program to check whether a string is a palindrome or not.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (left < right) {
        // Move to next valid characters if spaces or special characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        
        // Case-insensitive comparison
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Check and display if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter a string: Madam
The string is a palindrome.

Enter a string: Hello
The string is not a palindrome.
*/
