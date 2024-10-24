/*
QUESTION:
Write a C program to swap two integers using a third variable.
Input: Enter the first number: 10
       Enter the second number: 20
Output: Before swapping: number 1 = 10, number 2 = 20
        After swapping: number 1 = 20, number 2 = 10
*/

#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Swap using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("After swapping: number 1 = %d, number 2 = %d\n", num1, num2);
    return 0;
}
/*
OUTPUT:
Enter the first number: 10
Enter the second number: 20
After swapping: number 1 = 20, number 2 = 10
*/
