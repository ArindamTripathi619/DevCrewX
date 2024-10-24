/*
QUESTION:
WAP to input any two integers and provide a menu to the user to select any of the options as add, subtract, multiply, or divide. Display the result according to the chosen option.

Input: Enter two numbers: 3 6
       Enter your choice: 1 (for add)
Output: Result = 9.
*/

#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result = %d\n", num1 + num2); break;
        case 2: printf("Result = %d\n", num1 - num2); break;
        case 3: printf("Result = %d\n", num1 * num2); break;
        case 4: 
            if (num2 != 0) {
                printf("Result = %d\n", num1 / num2);
            } else {
                printf("Division by zero error.\n");
            }
            break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}
/*
OUTPUT:
Result = 9.
*/
