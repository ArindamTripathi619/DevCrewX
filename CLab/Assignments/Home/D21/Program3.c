/*
QUESTION:
Write a C program to use a function that receives two string addresses and returns the address of the string which comes first in alphabetical order.
Input: Enter the first string: function
       Enter the second string: fungal
Output: Among the two strings the first string in alphabetical order: function
*/

#include <stdio.h>
#include <string.h>

char* smallerString(char *s1, char *s2) {
    if (strcmp(s1, s2) < 0) {
        return s1;
    }
    return s2;
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    // Find and output the lexicographically smaller string
    char *result = smallerString(str1, str2);
    printf("Among the two strings the first string in alphabetical order: %s\n", result);

    return 0;
}

/*
OUTPUT:
Enter the first string: function
Enter the second string: fungal
Among the two strings the first string in alphabetical order: function
*/
