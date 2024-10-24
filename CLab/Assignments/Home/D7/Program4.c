/*
QUESTION:
WAP to check if a number is palindrome or not.
Input 1: Enter a number: 121
Output 1: 121 is a palindrome number.
Input 2: Enter a number: 427
Output 2: 427 is not a palindrome number.
*/

#include <stdio.h>

int main() {
    int num, original_num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;
    
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (reverse == original_num)
        printf("%d is a palindrome number.\n", original_num);
    else
        printf("%d is not a palindrome number.\n", original_num);
    
    return 0;
}

/*
OUTPUT:
Enter a number: 121
121 is a palindrome number.

Enter a number: 427
427 is not a palindrome number.
*/
