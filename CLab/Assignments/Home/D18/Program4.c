/*
QUESTION:
Write a recursive function to convert a binary number to its equivalent decimal value.
*/

#include <stdio.h>

// Recursive function to convert binary to decimal
int binaryToDecimal(int binary, int index) {
    if (binary == 0)
        return 0;
    else
        return (binary % 10) * (1 << index) + binaryToDecimal(binary / 10, index + 1);
}

int main() {
    int binary;
    
    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
    // Convert and display the decimal equivalent
    printf("Decimal equivalent of binary number %d = %d\n", binary, binaryToDecimal(binary, 0));
    
    return 0;
}

/*
OUTPUT:
Enter a binary number: 1100
Decimal equivalent of binary number 1100 = 12
*/
