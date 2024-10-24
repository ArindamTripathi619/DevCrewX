/*
QUESTION:
WAP to print a number in letters. The user has to input a number, and the program outputs the number as words for each digit.
*/

#include <stdio.h>

void printDigit(int digit) {
    switch(digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int main() {
    int num, reversed = 0;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number to print digits from left to right
    int temp = num;
    while (temp != 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    
    printf("%d → ", num);
    
    // Print digits in words
    while (reversed != 0) {
        printDigit(reversed % 10);
        reversed /= 10;
    }
    
    return 0;
}

/*
OUTPUT:
Enter a number: 97
97 → Nine Seven
*/
