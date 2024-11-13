/*
QUESTION:
Write a C program to check if two strings are anagrams.
Input 1: Enter the first string: listen
         Enter the second string: silent
Output 1: Given strings are anagrams
Input 2: Enter the first string: speak
         Enter the second string: silent
Output 2: Given strings are not anagrams.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    // Input strings
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Check if they are anagrams
    if (strcmp(str1, str2) == 0) {
        printf("Given strings are anagrams\n");
    } else {
        printf("Given strings are not anagrams\n");
    }

    return 0;
}

/*
OUTPUT 1:
Enter the first string: listen
Enter the second string: silent
Given strings are anagrams

OUTPUT 2:
Enter the first string: speak
Enter the second string: silent
Given strings are not anagrams
*/
