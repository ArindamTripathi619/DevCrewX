/*
QUESTION:
WAP to find the length of a string with and without using a library function.
*/

#include <stdio.h>
#include <string.h>

// Function to find length without using strlen
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[100];
    
    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Length using library function
    printf("Length of the string (using strlen) = %d\n", strlen(str));
    
    // Length without using library function
    printf("Length of the string (without using strlen) = %d\n", stringLength(str));
    
    return 0;
}

/*
OUTPUT:
Enter a string: India
Length of the string (using strlen) = 5
Length of the string (without using strlen) = 5
*/
