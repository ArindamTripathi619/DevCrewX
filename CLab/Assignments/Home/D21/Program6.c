/*
QUESTION:
Write a program in C to print all permutations of a given string using pointers.
Input: Enter a string: RUN
Output: "RUN", "RNU", "URN", "UNR", "NRU", "NUR"
*/

#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("\"%s\"", str);
        if (left != 0) {
            printf(", ");
        }
    } else {
        for (int i = left; i <= right; i++) {
            // Swap the characters
            swap((str + left), (str + i));

            // Recurse for the next level
            permute(str, left + 1, right);

            // Backtrack to restore the original order
            swap((str + left), (str + i));
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    gets(str);

    printf("All permutations of the given string are: ");
    permute(str, 0, strlen(str) - 1);
    printf("\n");

    return 0;
}

/*
OUTPUT:
Enter a string: RUN
All permutations of the given string are: "RUN", "RNU", "URN", "UNR", "NRU", "NUR"
*/
