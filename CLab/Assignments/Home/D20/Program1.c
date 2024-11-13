/*
QUESTION:
Write a C program to count the number of vowels, consonants, total number of characters, and number of words present in a string.
Input: Enter a string: Kalinga Institute of Technology
Output: Number of vowels: 11
        Number of consonants: 20
        Number of characters: 31
        Number of words: 4
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, characters = 0, words = 1;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Counting the vowels, consonants, characters, and words
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            characters++;
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (str[i] == ' ') {
            words++;
        }
    }

    // Output the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);

    return 0;
}

/*
OUTPUT:
Enter a string: Kalinga Institute of Technology
Number of vowels: 11
Number of consonants: 20
Number of characters: 31
Number of words: 4
*/
