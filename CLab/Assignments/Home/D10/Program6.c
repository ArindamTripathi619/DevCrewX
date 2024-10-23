/*
WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1

Input: Enter the number of rows: 4
Output: 1
        1 2 1
        1 2 3 2 1
        1 2 3 4 3 2 1
*/

#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for(int j = i-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter the number of rows: 5
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
