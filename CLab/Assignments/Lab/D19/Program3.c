/*
QUESTION:
WAP to find the reverse of a string with and without using a library function.
*/

#include <stdio.h>
#include <string.h>

// Function to reverse string without using strrev
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100];
    
    // Input the string
    printf("Enter a string: ");
    gets(str1);
    
    // Reverse using library function
    strcpy(str2, str1); // Copy for using library function
    strrev(str2);
    printf("Reverse of the string (using strrev): %s\n", str2);
    
    // Reverse without using library function
    reverseString(str1);
    printf("Reverse of the string (without using strrev): %s\n", str1);
    
    return 0;
}

/*
OUTPUT:
Enter a string: India
Reverse of the string (using strrev): aidnI
Reverse of the string (without using strrev): aidnI
*/
