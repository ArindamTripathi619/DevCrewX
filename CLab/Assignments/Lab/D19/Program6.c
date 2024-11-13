/*
QUESTION:
WAP to compare two strings with and without using a library function.
*/

#include <stdio.h>
#include <string.h>

// Function to compare strings without using strcmp
int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] < str2[i]) ? -1 : 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    return (str1[i] == '\0') ? -1 : 1;
}

int main() {
    char str1[100], str2[100];
    
    // Input the strings
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    
    // Compare using library function
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are the same (using strcmp).\n");
    } else if (result < 0) {
        printf("First string is before the second string (using strcmp).\n");
    } else {
        printf("First string is after the second string (using strcmp).\n");
    }
    
    // Compare without using library function
    result = compareStrings(str1, str2);
    if (result == 0) {
        printf("Both strings are the same (without using strcmp).\n");
    } else if (result < 0) {
        printf("First string is before the second string (without using strcmp).\n");
    } else {
        printf("First string is after the second string (without using strcmp).\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the first string: Ajit
Enter the second string: Ajay
First string is after the second string (using strcmp).
First string is after the second string (without using strcmp).

Enter the first string: Ajit
Enter the second string: Anand
First string is before the second string (using strcmp).
First string is before the second string (without using strcmp).

Enter the first string: Shyam
Enter the second string: Shyam
Both strings are the same (using strcmp).
Both strings are the same (without using strcmp).
*/
