/*
QUESTION:
Write a C program to print the transpose of a 2-D array using a function printTranspose.
*/

#include <stdio.h>

// Function to calculate and display the transpose of a matrix
void printTranspose(int matrix[][10], int rows, int cols) {
    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    // Input the size of the square matrix
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
    
    // Display the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display the transpose of the matrix
    printTranspose(matrix, n, n);
    
    return 0;
}

/*
OUTPUT:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 2 0
1 1 0
0 7 1
Original Matrix:
1 2 0
1 1 0
0 7 1
Transpose of the Matrix:
1 1 0
2 1 7
0 0 1
*/
