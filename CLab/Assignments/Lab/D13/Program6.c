/*
QUESTION:
WAP to find the sum of rows and columns of a matrix. The user has to input the size and elements of the matrix, and the program calculates and displays the sum of each row and each column.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c], row_sum[r], col_sum[c];
    
    // Initialize row and column sums to 0
    for (i = 0; i < r; i++) row_sum[i] = 0;
    for (i = 0; i < c; i++) col_sum[i] = 0;
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];  // Sum for each row
            col_sum[j] += matrix[i][j];  // Sum for each column
        }
    }
    
    // Display matrix and row sums
    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("| %d\n", row_sum[i]);  // Display row sum at the end of each row
    }
    
    // Display column sums
    printf("__________________\n");
    for (j = 0; j < c; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
2 4 2
1 3 1
4 3 1
Matrix:
2 4 2 | 8
1 3 1 | 5
4 3 1 | 8
__________________
7 10 4
*/
