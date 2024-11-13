/*
QUESTION:
Write a C program to delete n characters from a given position of a given string.
Input: Enter a string: University
       Enter the number of characters to delete: 5
       Enter the position to delete: 3
Output: After deletion the string is: Unity
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, n, len;

    // Input the string
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    // Input position and number of characters to delete
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    // Deleting n characters from the given position
    if (pos >= 0 && pos + n <= len) {
        for (int i = pos - 1; i + n < len; i++) {
            str[i] = str[i + n];
        }
        str[len - n] = '\0';
    }

    // Output the modified string
    printf("After deletion the string is: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: University
Enter the number of characters to delete: 5
Enter the position to delete: 3
After deletion the string is: Unity
*/
