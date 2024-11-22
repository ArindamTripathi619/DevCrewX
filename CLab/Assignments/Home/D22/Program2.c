/*
QUESTION:
Write a C program to dynamically allocate memory to store n names and sort them in alphabetical order.
Input: Enter the value of n: 5
       Enter 5 names:
       Raj
       Ajay
       Bikram
       Prakash
       John
Output: After sorting the names are:
       Ajay
       Bikram
       John
       Prakash
       Raj
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    char **names, temp[100];

    // Input the number of names
    printf("Enter the value of n: ");
    scanf("%d", &n);
    getchar(); // Consume newline character

    // Dynamically allocate memory for names
    names = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc(100 * sizeof(char));
    }

    // Input names
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        gets(names[i]);
    }

    // Sort names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Output sorted names
    printf("After sorting the names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}

/*
OUTPUT:
Enter the value of n: 5
Enter 5 names:
Raj
Ajay
Bikram
Prakash
John
After sorting the names are:
Ajay
Bikram
John
Prakash
Raj
*/
