/*
QUESTION:
WAP to print the natural numbers from 1 to n.
Input: Enter the value of n: 7
Output: Natural numbers from 1 to 7 are: 1 2 3 4 5 6 7
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter the value of n: 7
Natural numbers from 1 to 7 are: 1 2 3 4 5 6 7
*/
