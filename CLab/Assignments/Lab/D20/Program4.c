/*
QUESTION:
Write a C program to input names of n persons and arrange them in alphabetic order.
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
#include <string.h>

int main() {
    char names[100][100], temp[100];
    int n;

    // Input number of names
    printf("Enter the value of n: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    // Input names
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        gets(names[i]);
    }

    // Sorting names in alphabetical order
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
