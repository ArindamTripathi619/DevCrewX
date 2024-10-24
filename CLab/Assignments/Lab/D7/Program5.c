/*
QUESTION:
WAP to calculate the factorial of a given number.
Input: Enter a number: 4
Output: Factorial of 4 = 24
*/

#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}

/*
OUTPUT:
Enter a number: 4
Factorial of 4 = 24
*/
