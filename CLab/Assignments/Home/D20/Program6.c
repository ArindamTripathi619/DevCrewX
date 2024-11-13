/*
QUESTION:
Write a C program to convert a string of digits into an integer value.
Input: Enter a number as a string of digits: 125
Output: Entered number is 125
*/

#include <stdio.h>
#include <string.h>

int stringToInt(char *str) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            printf("Invalid input: The string contains non-digit characters.\n");
            return -1;
        }
    }
    return num;
}

int main() {
    char str[100];
    int num;

    // Input the string of digits
    printf("Enter a number as a string of digits: ");
    gets(str);

    // Convert the string to an integer
    num = stringToInt(str);

    // Output the integer value
    if (num != -1) {
        printf("Entered number is %d\n", num);
    }

    return 0;
}

/*
OUTPUT:
Enter a number as a string of digits: 125
Entered number is 125

Invalid case:
Enter a number as a string of digits: 12a5
Invalid input: The string contains non-digit characters.
*/
