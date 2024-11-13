/*
QUESTION:
Write a C program to find the difference of the sum of the elements of the major and minor diagonals of a matrix using a function diffDiagonal.
*/

#include <stdio.h>

// Function to calculate the difference between sums of major and minor diagonals
int diffDiagonal(int matrix[][10], int size) {
    int majorSum = 0, minorSum = 0;
    
    for(int i = 0; i < size; i++) {
        majorSum += matrix[i][i];
        minorSum += matrix[i][size - i - 1];
    }
    
    return majorSum - minorSum;
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
    
    // Calculate and display the difference
    printf("Difference of sum of the elements of major and minor diagonals = %d\n", diffDiagonal(matrix, n));
    
    return 0;
}

/*
OUTPUT:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
8 2 3
5 1 4
8 0 7
Difference of sum of the elements of major and minor diagonals = 4
*/
