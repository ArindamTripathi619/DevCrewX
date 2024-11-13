/*
QUESTION:
WAP to copy one string into another with and without using a library function.
*/

#include <stdio.h>
#include <string.h>

// Function to copy string without using strcpy
void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[100], dest1[100], dest2[100];
    
    // Input the source string
    printf("Enter the source string: ");
    gets(source);
    
    // Copy using library function
    strcpy(dest1, source);
    printf("After copying (using strcpy):\nSource string: %s\nDestination string: %s\n", source, dest1);
    
    // Copy without using library function
    copyString(dest2, source);
    printf("After copying (without using strcpy):\nSource string: %s\nDestination string: %s\n", source, dest2);
    
    return 0;
}

/*
OUTPUT:
Enter the source string: India
After copying (using strcpy):
Source string: India
Destination string: India
After copying (without using strcpy):
Source string: India
Destination string: India
*/
