/*
QUESTION:
WAP to check whether a character entered through keyboard is a digit, letter, or special character.

Input 1: Enter a character: 3
Output 1: The entered character 3 is a digit.
Input 2: Enter a character: &
Output 2: Entered character & is a special character.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("The entered character %c is a digit.\n", ch);
    } else if (isalpha(ch)) {
        printf("The entered character %c is a letter.\n", ch);
    } else {
        printf("Entered character %c is a special character.\n", ch);
    }

    return 0;
}
/*
OUTPUT:
The entered character 3 is a digit.
Entered character & is a special character.
*/
