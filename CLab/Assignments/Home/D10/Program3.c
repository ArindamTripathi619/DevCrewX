/*
3. WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
    * * * *
     * * *
      * *
       *
Input: Enter the number of rows: 4
Output: 
        * * * *
         * * *
          * *
           *
*/

#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int n;
    scanf("%d", &n);
    for (int i = n-1; i >= 0; i--) {
        for (int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:

*/
