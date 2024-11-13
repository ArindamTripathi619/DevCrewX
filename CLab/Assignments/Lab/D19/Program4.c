/*
QUESTION:
WAP to replace all occurrences of a character in a given string with a new character.
*/

#include <stdio.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;
    
    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Input characters to replace and replace with
    printf("Enter the character to be replaced: ");
    scanf(" %c", &oldChar);
    printf("Enter the character to replace with: ");
    scanf(" %c", &newChar);
    
    // Replace and display the result
    replaceChar(str, oldChar, newChar);
    printf("After replacement, string is: %s\n", str);
    
    return 0;
}

/*
OUTPUT:
Enter a string: Kalinga Institute of Industrial Technology
Enter the character to be replaced: a
Enter the character to replace with: b
After replacement, string is: Kblingb Institute of Industribl Technology
*/
