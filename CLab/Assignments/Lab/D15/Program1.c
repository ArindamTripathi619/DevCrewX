/*
QUESTION:
WAP to add two numbers entered through the keyboard by using a suitable user-defined function.
*/

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Display the sum using the add function
    printf("Sum of %d and %d = %d\n", num1, num2, add(num1, num2));
    
    return 0;
}

/*
OUTPUT:
Enter two numbers: 17 13
Sum of 17 and 13 = 30
*/
