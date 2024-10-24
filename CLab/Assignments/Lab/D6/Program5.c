/*
QUESTION:
WAP which takes two integer operands and one operator from the user, performs the operation, and then prints the result. Consider the operators +, -, *, / and %.

Input: Enter two numbers: 13 6
       Enter the operator: *
Output: Result: 78
*/

#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        case '%': result = num1 % num2; break;
        default: printf("Invalid operator.\n"); return 1;
    }

    printf("Result: %d\n", result);
    
    return 0;
}
/*
OUTPUT:
Result: 78
*/
