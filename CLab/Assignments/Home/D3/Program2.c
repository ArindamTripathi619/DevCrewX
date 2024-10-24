/*
QUESTION:
Write a C program to swap two integers without using a third variable.
Input: Enter the first number: 100
       Enter the second number: 200
Output: Before swapping: number 1 = 100, number 2 = 200
        After swapping: number 1 = 200, number 2 = 100
*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Swap without third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    printf("After swapping: number 1 = %d, number 2 = %d\n", num1, num2);
    return 0;
}
/*
OUTPUT:
Enter the first number: 100
Enter the second number: 200
After swapping: number 1 = 200, number 2 = 100
*/
