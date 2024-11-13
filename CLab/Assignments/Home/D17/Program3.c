/*
QUESTION:
Write a C program to check if a square matrix is upper-triangular using a function checkUpperTriangular. The function should return 1 if the matrix is upper-triangular, otherwise 0.
*/

#include <stdio.h>

// Function to check if a matrix is upper-triangular
int checkUpperTriangular(int matrix[][10], int size) {
    for(int i = 1; i < size; i++) {
        for(int j = 0; j < i; j++) {
            if(matrix[i][j] != 0) {
                return 0; // Not upper-triangular
            }
        }
    }
    return 1; // Upper-triangular
}

int main() {
    int n;
    
    // Input the size of the square matrix
    printf("Enter the row (or column) size of the matrix: ");
    scanf("%d", &n);
    
    int matrix[10][10];
    
    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if the matrix is upper-triangular
    if(checkUpperTriangular(matrix, n)) {
        printf("The matrix is upper-triangular.\n");
    }
    else {
        printf("The matrix is not upper-triangular.\n");
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 2 3
0 1 4
0 0 7
The matrix is upper-triangular.

OUTPUT 2:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 0 5
2 2 3
5 7 3
The matrix is not upper-triangular.
*/
