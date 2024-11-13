/*
QUESTION:
Write a C program to print a given string in alphabetical order.
Input: Enter a string: INDIA
Output: After sorting the string in alphabetical order is ADIIN
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    // Input the string
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    // Sorting the string in alphabetical order
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    // Output the sorted string
    printf("After sorting the string in alphabetical order is %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: INDIA
After sorting the string in alphabetical order is ADIIN
*/
