/*
QUESTION:
Write a C program to concatenate two strings with and without using a library function.
*/

#include <stdio.h>
#include <string.h>

// Function to concatenate strings without using strcat
void concatenateStrings(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++; // Move to the end of str1
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[50], str3[100];
    
    // Input the strings
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    
    // Concatenate using library function
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Concatenated string (using strcat): %s\n", str3);
    
    // Concatenate without using library function
    concatenateStrings(str1, str2);
    printf("Concatenated string (without using strcat): %s\n", str1);
    
    return 0;
}

/*
OUTPUT:
Enter the first string: Hello
Enter the second string: World
Concatenated string (using strcat): HelloWorld
Concatenated string (without using strcat): HelloWorld
*/
