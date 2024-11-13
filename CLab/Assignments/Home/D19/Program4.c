/*
QUESTION:
Write a C program to read a sentence and print the frequency of each vowel and the total count of consonants present in it.
Input: Enter a string: international
Output:
Vowels: a:2 e:1 i:2 o:1 u:0
Consonants:7
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int vowels[5] = {0}; // a, e, i, o, u
    int consonants = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Calculate frequencies of vowels and count consonants
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a') vowels[0]++;
        else if (ch == 'e') vowels[1]++;
        else if (ch == 'i') vowels[2]++;
        else if (ch == 'o') vowels[3]++;
        else if (ch == 'u') vowels[4]++;
        else if (isalpha(ch)) consonants++;
    }

    // Display vowel frequencies
    printf("Vowels: a:%d e:%d i:%d o:%d u:%d\n", vowels[0], vowels[1], vowels[2], vowels[3], vowels[4]);
    printf("Consonants:%d\n", consonants);

    return 0;
}

/*
OUTPUT:
Enter a string: international
Vowels: a:2 e:1 i:2 o:1 u:0
Consonants:7
*/
