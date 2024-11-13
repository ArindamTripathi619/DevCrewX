/*
QUESTION:
Write a C program to find the trace (sum of main diagonal elements) of a matrix of size n x n using a function sumDiagonal.
*/

#include <stdio.h>

// Function to calculate the trace of a matrix
int sumDiagonal(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int n;
    
    // Input size of the square matrix
    printf("Enter the row (or column) size of the matrix: ");
    scanf("%d", &n);
    
    int matrix[10][10];
    
    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the trace of the matrix
    printf("Trace of the matrix = %d\n", sumDiagonal(matrix, n));
    
    return 0;
}

/*
OUTPUT:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 2 0
0 2 4
5 7 3
Trace of the matrix = 6
*/
