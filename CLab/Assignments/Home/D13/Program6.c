/*
QUESTION:
WAP to determine whether a matrix is a sparse matrix or not. A sparse matrix has more zero elements than non-zero elements. The user has to input the size and elements of the matrix, and the program checks if it's sparse.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, zero_count = 0, non_zero_count = 0;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zero_count++;
            } else {
                non_zero_count++;
            }
        }
    }
    
    // Display the matrix
    printf("Given Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Check if matrix is sparse
    if (zero_count > non_zero_count) {
        printf("It is a Sparse Matrix.\n");
    } else {
        printf("It is not a Sparse Matrix.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
0 2 0
0 0 4
5 0 0
Given Matrix:
0 2 0
0 0 4
5 0 0
It is a Sparse Matrix.

Enter the row and column size of the matrix: 4 4
Enter the elements of the matrix:
0 2 0 5
0 0 4 6
5 7 0 8
Given Matrix:
0 2 0 5
0 0 4 6
5 7 0 8
It is not a Sparse Matrix.
*/
