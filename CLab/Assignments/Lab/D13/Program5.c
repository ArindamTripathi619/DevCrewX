/*
QUESTION:
WAP to find the sum of elements of the upper triangular matrix. The user has to input the size and elements of the matrix, and the program calculates and displays the sum of the elements in the upper triangular part.
*/

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    
    // Input matrix size (square matrix)
    printf("Enter the row or column size of a square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the original matrix
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Calculate the sum of the upper triangular matrix
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {  // Only elements in the upper triangular part
            sum += matrix[i][j];
        }
    }
    
    // Display the sum
    printf("Sum of elements of upper triangular matrix: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the row or column size of a square matrix: 3
Enter the elements of the matrix:
2 4 2
1 3 1
4 3 1
Matrix:
2 4 2
1 3 1
4 3 1
Sum of elements of upper triangular matrix: 13
*/
