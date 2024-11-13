/*
QUESTION:
Write a C program to check if a square matrix is a unit matrix using a function checkUnit. The function should return 1 if it is a unit matrix, otherwise 0.
*/

#include <stdio.h>

// Function to check if a matrix is a unit matrix
int checkUnit(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
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
    
    // Check if matrix is a unit matrix
    if (checkUnit(matrix, n)) {
        printf("Entered matrix is a unit matrix.\n");
    } else {
        printf("Entered matrix is not a unit matrix.\n");
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 0 0
0 1 0
0 0 1
Entered matrix is a unit matrix.

OUTPUT 2:
Enter the row (or column) size of the matrix: 3
Enter the elements of the matrix:
1 2 0
1 1 0
0 7 1
Entered matrix is not a unit matrix.
*/
