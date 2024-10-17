/*
WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4

Input: Enter the number of rows: 4
Output: 1 1 1 1 1
        2 2 2 2 2
        3 3 3 3 3
        4 4 4 4 4
*/

#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=rows; j++) {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:

*/
