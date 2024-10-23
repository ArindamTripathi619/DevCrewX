/*
QUESTION:
WAP to print the elements of the upper triangular matrix. The user has to input the size and elements of the matrix, and the program displays the upper triangular part of the matrix.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    
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
    
    // Display the matrix
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display the upper triangular matrix
    printf("Upper Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("  ");  // Leave blank for non-upper triangular elements
            }
        }
        printf("\n");
    }
    
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
Upper Triangular Matrix:
2 4 2 
  3 1 
    1
*/
