/*
QUESTION:
WAP to convert a decimal number into its equivalent binary number. The user has to input a decimal number, and the program outputs its binary equivalent.
*/

#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;
    
    // Input the decimal number
    printf("Enter a Decimal number: ");
    scanf("%d", &decimal);
    
    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    // Display the binary equivalent
    printf("Binary equivalent of Decimal number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter a Decimal number: 25
Binary equivalent of Decimal number 25 = 11001
*/
