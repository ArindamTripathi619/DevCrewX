/*
4. WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
1
2 1
1 2 3
4 3 2 1

Input: Enter the number of rows: 4
Output: 1
        2 1
        1 2 3
        4 3 2 1
*/

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            for(int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            for(int j = i; j >= 1; j--) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    
    return 0;
}
/*
OUTPUT:
Enter the number of rows: 5
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
*/
