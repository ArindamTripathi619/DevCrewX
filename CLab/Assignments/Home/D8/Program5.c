/*
QUESTION:
WAP to check whether an integer number is an Armstrong number or not.
A number is Armstrong when the sum of each of its digits raised to the power of the number of digits is the same as the number.
Input 1: Enter a number: 153
Output 1: 153 is an Armstrong number
Input 2: Enter a number: 253
Output 2: 253 is not an Armstrong number
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    // Find the number of digits
    while (original_num != 0) {
        original_num /= 10;
        n++;
    }

    original_num = num;

    // Calculate the sum of each digit raised to the power of n
    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

/*
OUTPUT:
Enter a number: 153
153 is an Armstrong number.

Enter a number: 253
253 is not an Armstrong number.
*/
