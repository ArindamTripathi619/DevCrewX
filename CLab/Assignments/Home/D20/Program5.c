/*
QUESTION:
Write a C program to replace all occurrences of a sub-string in a given string with a new one.
Input: Enter a string: Raj and Shyam were good friends. Now, Shyam has become the enemy of Raj.
       Enter the sub-string to be replaced: Shyam
       Enter the new sub-string: Ravi
Output: Raj and Ravi were good friends. Now, Ravi has become the enemy of Raj.
*/

#include <stdio.h>
#include <string.h>

void replaceSubstring(char *str, char *oldSub, char *newSub) {
    char result[500];
    int i, j = 0, k;
    int oldLen = strlen(oldSub);
    int newLen = strlen(newSub);
    int strLen = strlen(str);

    for (i = 0; i < strLen; i++) {
        // Check if old substring matches
        if (strncmp(&str[i], oldSub, oldLen) == 0) {
            // Copy new substring
            for (k = 0; k < newLen; k++) {
                result[j++] = newSub[k];
            }
            i += oldLen - 1;
        } else {
            // Copy original character
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int main() {
    char str[500], oldSub[100], newSub[100];

    // Input the main string, substring to replace, and the new substring
    printf("Enter a string: ");
    gets(str);
    printf("Enter the sub-string to be replaced: ");
    gets(oldSub);
    printf("Enter the new sub-string: ");
    gets(newSub);

    // Replace the substring
    replaceSubstring(str, oldSub, newSub);

    // Output the modified string
    printf("After replacing, the string is: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: Raj and Shyam were good friends. Now, Shyam has become the enemy of Raj.
Enter the sub-string to be replaced: Shyam
Enter the new sub-string: Ravi
After replacing, the string is: Raj and Ravi were good friends. Now, Ravi has become the enemy of Raj.
*/
