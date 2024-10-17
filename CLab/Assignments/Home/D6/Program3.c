#include <stdio.h>

int main() {
    char ch;

    // Input: Character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to uppercase for simplicity
    ch = (ch>='a'&&ch<='z') ? ch-32:ch;

    // Check if the character is a vowel, consonant, or not an alphabet
    if (ch >= 'A' && ch <= 'Z') {
        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': 
            case 'U':
                printf("Entered character is a vowel\n");
                break;
            default:
                printf("Entered character is a consonant\n");
                break;
        }
    } else {
        printf("Entered character is not an alphabet\n");
    }

    return 0;
}
/*
    Enter a character: h
    Entered character is a consonant
*/