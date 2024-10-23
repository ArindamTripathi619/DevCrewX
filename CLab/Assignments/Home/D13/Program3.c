/*
QUESTION:
WAP to check whether a matrix is an identity matrix or not. An identity matrix has 1s on the main diagonal and 0s elsewhere. The user has to input the size and elements of the matrix, and the program checks if it's an identity matrix.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, is_identity = 1;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Matrix must be square to be an identity matrix.\n");
        return 0;
    }
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if matrix is an identity matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j && matrix[i][j] != 1) {
                is_identity = 0;
            } else if (i != j && matrix[i][j] != 0) {
                is_identity = 0;
            }
        }
    }
    
    // Display result
    if (is_identity) {
        printf("Given matrix is an Identity Matrix.\n");
    } else {
        printf("Given matrix is not an Identity Matrix.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
1 0 0
0 1 0
0 0 1
Given matrix is an Identity Matrix.

Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
1 0 1
0 1 2
0 0 1
Given matrix is not an Identity Matrix.
*/
