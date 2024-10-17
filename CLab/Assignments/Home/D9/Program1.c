/*
WAP to convert a binary number into its equivalent decimal number.
Input: Enter a Binary Number: 101010
Output: Decimal equivalent of Binary Number 101010 = 42
*/

#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a Binary Number:");
    int binaryNum, decimalNum = 0, i = 0, remainder,temp;
    scanf("%d", &binaryNum);
    temp = binaryNum;
    while (binaryNum != 0) {
        remainder = binaryNum % 10;

        decimalNum += remainder * pow(2, i);
        binaryNum /= 10;
        i++;
    }
    printf("Decimal equivalent of Binary Number %d = %d\n", temp, decimalNum);
    return 0;
}
/*
OUTPUT:

*/
