/*
QUESTION:
WAP to print the series as 0, 1, 3, 7, 15, 31, ..........up to an inputted number n.
Input: Enter a number: 35
Output: Series: 0, 1, 3, 7, 15, 31,
*/

#include <stdio.h>

int main() {
    int n, value = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 0; value <= n; i++) {
        value = (1 << i) - 1; // 2^i - 1
        if (value <= n)
            printf("%d, ", value);
    }

    printf("\n");
    return 0;
}

/*
OUTPUT:
Enter a number: 35
Series: 0, 1, 3, 7, 15, 31,
*/
