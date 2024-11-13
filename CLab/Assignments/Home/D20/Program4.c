/*
QUESTION:
Develop a function int MatchAny(char s1[], char s2[]) that returns:
1 if s2 is a substring of s1,
0 if both s1 and s2 are equal,
-1 otherwise.
*/

#include <stdio.h>

int MatchAny(char s1[], char s2[]) {
    int i, j;

    // Check if both strings are equal
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            break;
        }
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    }

    // Check if s2 is a substring of s1
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i + j] == s2[j]; j++);
        if (s2[j] == '\0') {
            return 1;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];

    // Input strings
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);

    // Output the result
    int result = MatchAny(s1, s2);
    if (result == 0) {
        printf("Both strings are same.\n");
    } else if (result == 1) {
        printf("Second string is a sub-string of first string.\n");
    } else {
        printf("Second string is not a sub-string of first string.\n");
    }

    return 0;
}

/*
OUTPUT 1:
Enter the first string: Indian
Enter the second string: India
Second string is a sub-string of first string.

OUTPUT 2:
Enter the first string: India
Enter the second string: India
Both strings are same.

OUTPUT 3:
Enter the first string: India
Enter the second string: Hello
Second string is not a sub-string of first string.
*/
