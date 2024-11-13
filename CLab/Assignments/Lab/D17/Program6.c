/*
QUESTION:
Write a C program to check whether two matrices are equal using a function isEqual. The function should return 1 if the matrices are element-wise equal, otherwise 0.
*/

#include <stdio.h>

// Function to check if two matrices are equal
int isEqual(int mat1[][10], int mat2[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int rows, cols;
    
    // Input dimensions of the matrices
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &rows, &cols);
    
    int mat1[10][10], mat2[10][10];
    
    // Input elements for matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements for matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Check if matrices are equal
    if (isEqual(mat1, mat2, rows, cols)) {
        printf("Both the matrices are equal.\n");
    } else {
        printf("The matrices are not equal.\n");
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter the row and column size of matrix 1: 3 3
Enter the elements of matrix 1:
0 2 0
0 0 4
5 7 0
Enter the elements of matrix 2:
0 2 0
0 0 4
5 7 0
Both the matrices are equal.

OUTPUT 2:
Enter the row and column size of matrix 1: 3 3
Enter the elements of matrix 1:
0 2 0
6 5 4
5 7 9
Enter the elements of matrix 2:
0 2 0
0 0 4
5 7 0
The matrices are not equal.
*/
