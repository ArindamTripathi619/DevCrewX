/*
QUESTION:
WAP to perform the addition of two integers and display the result. Input must be given by user.
Input: Enter two numbers: 5 10
Output: Sum of the two numbers = 15
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of the two numbers = %d\n", sum);
    return 0;
}
/*
OUTPUT:
Enter two numbers: 5 10
Sum of the two numbers = 15
*/
