/*
QUESTION:
Write a C program to extract a substring from a given string. Prompt the user to enter the starting position and length of the substring.
Input:
Enter a string: Indian Space Research Organization
Enter the starting position of the substring: 8
Enter the length of the substring: 5
Output: Substring: Space
*/

#include <stdio.h>
#include <string.h>

void substring(char str[], int start, int length, char result[]) {
    int i;
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        result[i] = str[start + i];
    }
    result[i] = '\0';
}

int main() {
    char str[100], result[100];
    int start, length;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Input starting position and length of the substring
    printf("Enter the starting position of the substring: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    // Extract and display the substring
    substring(str, start - 1, length, result); // Adjust start for 0-based index
    printf("Substring: %s\n", result);

    return 0;
}

/*
OUTPUT:
Enter a string: Indian Space Research Organization
Enter the starting position of the substring: 8
Enter the length of the substring: 5
Substring: Space
*/
