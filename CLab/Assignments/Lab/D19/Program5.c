/*
QUESTION:
WAP to extract the first character of each word of a given string.
*/

#include <stdio.h>
#include <ctype.h>

void extractFirstChars(char str[]) {
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            newWord = 1;
        } else if (newWord) {
            printf("%c", str[i]);
            newWord = 0;
        }
    }
    printf("\n");
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Display first character of each word
    printf("First character of each word of the given string: ");
    extractFirstChars(str);
    
    return 0;
}

/*
OUTPUT:
Enter a string: Kalinga Institute of Industrial Technology
First character of each word of the given string: KIoIT
*/
