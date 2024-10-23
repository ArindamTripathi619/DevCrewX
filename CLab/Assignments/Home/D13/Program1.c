/*
QUESTION:
WAP to find the trace (sum of the diagonal elements) of a given n×n matrix. The user has to input the size and elements of the matrix, and the program calculates and displays the trace.
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Input matrix size (square matrix)
    printf("Enter the row or column size of a square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the trace (sum of diagonal elements)
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    // Display the trace
    printf("Sum of the diagonal elements: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the row or column size of a square matrix: 3
Enter the elements of the matrix:
2 4 2
1 3 1
4 3 1
Sum of the diagonal elements: 6
*/
