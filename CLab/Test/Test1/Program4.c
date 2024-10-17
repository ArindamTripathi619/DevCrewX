/*
WAP to check whether an integer number is an Armstrong number or not. A number is Armstrong when the sum of each of its digits raised to the
power of the number of digits is same as the number.
Input 1: Enter a number: 153
Output 1: 153 is an Armstrong number
Input 2: Enter a number: 253
Output 2: 253 is not an Armstrong number
*/


#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num, originalNum, remainder, count = 0, result = 0;
    scanf("%d", &num);
    originalNum = num;
    // Count the number of digits
    while (num!= 0) {
        num /= 10;
        count++;
    }
    num = originalNum;
    // Calculate the sum of each digit raised to the power of the number of digits
    while (num!= 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    // Check if the original number is equal to the result
    if (originalNum == result) {
        printf("%d is an Armstrong number\n", originalNum);
    } else {
        printf("%d is not an Armstrong number\n", originalNum);
    }
    return 0;
}
/*
OUTPUT:

*/
