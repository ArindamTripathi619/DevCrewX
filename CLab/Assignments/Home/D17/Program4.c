/*
QUESTION:
Write a C program to perform scalar matrix multiplication using a function scalarMul.
*/

#include <stdio.h>

// Function to perform scalar multiplication on a matrix
void scalarMul(int matrix[][10], int result[][10], int rows, int cols, int scalar) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix[i][j] * scalar;
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, scalar;
    
    // Input the dimensions of the matrix
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10], scaledMatrix[10][10];
    
    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Input the scalar value
    printf("Enter the scalar value: ");
    scanf("%d", &scalar);
    
    // Perform scalar multiplication
    scalarMul(matrix, scaledMatrix, rows, cols, scalar);
    
    // Display the original matrix
    printf("Matrix M=\n");
    displayMatrix(matrix, rows, cols);
    
    // Display the scaled matrix
    printf("%dM=\n", scalar);
    displayMatrix(scaledMatrix, rows, cols);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
3 2 1
6 5 4
5 7 9
Enter the scalar value: 5
Matrix M=
3 2 1
6 5 4
5 7 9
5M=
15 10 5
30 25 20
25 35 45
*/
