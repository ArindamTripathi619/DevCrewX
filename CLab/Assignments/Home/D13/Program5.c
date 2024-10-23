/*
QUESTION:
WAP to test whether a square matrix is symmetrical or not. A matrix is symmetrical if it is the same as its transpose. The user has to input the size and elements of the matrix, and the program checks if it's symmetrical.
*/

#include <stdio.h>

int main() {
    int n, i, j, is_symmetric = 1;
    
    // Input matrix size (square matrix)
    printf("Enter the row / column size of the matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n], transpose[n][n];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Check if matrix is symmetrical
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                is_symmetric = 0;
                break;
            }
        }
    }
    
    // Display result
    printf("Given Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    if (is_symmetric) {
        printf("Matrix is Symmetrical\n");
    } else {
        printf("Matrix is not Symmetrical\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row / column size of the matrix: 3
Enter the elements of the matrix:
1 0 5
0 1 2
5 2 1
Given Matrix:
1 0 5
0 1 2
5 2 1
Matrix is Symmetrical

Enter the row / column size of the matrix: 3
Enter the elements of the matrix:
1 0 10
4 1 2
5 8 1
Given Matrix:
1 0 10
4 1 2
5 8 1
Matrix is not Symmetrical
*/
