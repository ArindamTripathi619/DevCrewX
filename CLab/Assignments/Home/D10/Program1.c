/*
1. WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
*
* *
* * *
* * * *

Input: Enter the number of rows: 4
Output: *
        * *
        * * *
        * * * *
*/

#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d",&rows);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:

*/
