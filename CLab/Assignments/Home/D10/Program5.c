/*
WAP to print the following pattern. The number of rows will be inputted from the
keyboard.
1
0 1
1 0 1
0 1 0 1

Input: Enter the number of rows: 4
Output: 1
        0 1
        1 0 1
        0 1 0 1
*/

#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if((i+j)%2==0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
/*
OUTPUT:
Enter the number of rows: 5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
