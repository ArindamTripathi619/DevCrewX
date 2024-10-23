/*
QUESTION:
WAP that builds the Pascal triangle of degree n and stores it in a square matrix P of dimension n+1. The user has to input the degree of the triangle, and the program generates and displays the Pascal triangle.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input degree of the Pascal triangle
    printf("Enter the degree of the triangle: ");
    scanf("%d", &n);
    
    int P[n+1][n+1];
    
    // Initialize Pascal triangle
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                P[i][j] = 1;  // First and last element of each row is 1
            else
                P[i][j] = P[i-1][j-1] + P[i-1][j];  // Sum of the two elements above
        }
    }
    
    // Display Pascal triangle
    printf("Pascal triangle of degree %d:\n", n);
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the degree of the triangle: 5
Pascal triangle of degree 5:
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1
*/
