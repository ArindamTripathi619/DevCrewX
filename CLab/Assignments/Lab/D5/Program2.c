/*
QUESTION:
WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message.

Input 1: Enter an alphabet: h
Output 1: The uppercase of the entered letter is H.
Input 2: Enter an alphabet: K
Output 2: You have entered 'K' which is already in uppercase.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The uppercase of the entered letter is %c.\n", toupper(ch));
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("You have entered '%c' which is already in uppercase.\n", ch);
    } else {
        printf("The entered character is not an alphabet.\n");
    }

    return 0;
}
/*
OUTPUT:
The uppercase of the entered letter is H.
You have entered 'K' which is already in uppercase.
*/
