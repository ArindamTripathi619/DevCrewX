/*
QUESTION:
Write a C program to multiply two 2-D arrays using a function. The function should receive three 2-D arrays as arguments, compute the product of the first two, and store it in the third array.
*/

#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
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
    int r1, c1, r2, c2;
    
    // Input dimensions of both matrices
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the row and column size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrices are not compatible for multiplication.\n");
        return 0;
    }
    
    int mat1[10][10], mat2[10][10], result[10][10];
    
    // Input elements for matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements for matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, c2);
    
    // Display matrices and their product
    printf("Matrix 1:\n");
    displayMatrix(mat1, r1, c1);
    
    printf("Matrix 2:\n");
    displayMatrix(mat2, r2, c2);
    
    printf("Product of Matrix 1 and Matrix 2:\n");
    displayMatrix(result, r1, c2);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix 1: 3 3
Enter the row and column size of matrix 2: 3 2
Enter the elements of matrix 1:
2 4 2
1 3 1
4 3 1
Enter the elements of matrix 2:
1 2
3 2
2 3
Matrix 1:
2 4 2
1 3 1
4 3 1
Matrix 2:
1 2
3 2
2 3
Product of Matrix 1 and Matrix 2:
18 18
12 11
15 17
*/
