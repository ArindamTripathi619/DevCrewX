/*
WAP to print the following pattern. The number of rows will be inputted from the 
keyboard. 
           * 
         * * 
       * * * 
     * * * * 
Input:  Enter the number of rows: 4 
Output:
           * 
         * * 
       * * * 
     * * * *
*/

#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");  // Print two spaces
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");  // Print a star followed by a space
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

/*
OUTPUT:
Enter the number of rows: 4 
        * 
      * * 
    * * * 
  * * * *
* * * * *
*/
