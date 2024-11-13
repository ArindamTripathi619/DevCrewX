/*
QUESTION:
Write a C program to check if a square matrix is symmetric using a function checkSymmetric. The function should return 1 if symmetric, otherwise 0.
*/

#include <stdio.h>

// Function to check if a matrix is symmetric
int checkSymmetric(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    
    // Input size of square matrix
    printf("Enter the row (or column) size of the matrix: ");
    scanf("%d", &n);
    
    int matrix[10][10];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if matrix is symmetric
    if (checkSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 2 5
2 2 7
5 7 3
The matrix is symmetric.

OUTPUT 2:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 0 5
2 2 3
5 7 3
The matrix is not symmetric.
*/
