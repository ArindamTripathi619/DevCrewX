/*
QUESTION:
WAP to convert a binary number into its equivalent decimal number. The user has to input a binary number, and the program outputs its decimal equivalent.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0;
    
    // Input the binary number
    printf("Enter a Binary Number: ");
    scanf("%d", &binary);
    
    // Convert binary to decimal
    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * pow(2, i);
        binary /= 10;
        i++;
    }
    
    // Display the decimal equivalent
    printf("Decimal equivalent of Binary Number = %d\n", decimal);
    
    return 0;
}

/*
OUTPUT:
Enter a Binary Number: 101010
Decimal equivalent of Binary Number 101010 = 42
*/
