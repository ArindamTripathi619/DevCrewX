/*
QUESTION:
Write a C program to find the sum of two matrices using a function. The function should receive three matrices as arguments, find the sum of the first two, and store it in the third matrix.
*/

#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    // Input matrix dimensions
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &rows, &cols);
    
    int mat1[10][10], mat2[10][10], sum[10][10];
    
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
    
    // Add matrices
    addMatrices(mat1, mat2, sum, rows, cols);
    
    // Display matrices and their sum
    printf("Matrix 1:\n");
    displayMatrix(mat1, rows, cols);
    
    printf("Matrix 2:\n");
    displayMatrix(mat2, rows, cols);
    
    printf("Sum of Matrix 1 and Matrix 2:\n");
    displayMatrix(sum, rows, cols);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix 1: 3 2
Enter the elements of matrix 1:
2 4
1 3
4 3
Enter the elements of matrix 2:
1 2
3 2
2 3
Matrix 1:
2 4
1 3
4 3
Matrix 2:
1 2
3 2
2 3
Sum of Matrix 1 and Matrix 2:
3 6
4 5
6 6
*/
