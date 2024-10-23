/*
QUESTION:
WAP to print the following pattern. The number of rows will be inputted from the keyboard.

Input: Enter the number of rows: 4
Output: A
        B A
        A B C
        D C B A

*/

#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        ch = (i % 2 == 0) ? 'B' : 'A';
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0)
                printf("%c ", ch--);
            else
                printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:
A
B A
A B C
D C B A
*/
