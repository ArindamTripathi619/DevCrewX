/*
QUESTION:
WAP to perform scalar matrix multiplication. The user has to enter the order of the matrix, the elements of the matrix, and a scalar value. The program then multiplies the matrix with the scalar and displays the result.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, scalar;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Input scalar value
    printf("Enter the scalar value: ");
    scanf("%d", &scalar);
    
    // Display original matrix
    printf("Matrix M=\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Perform scalar multiplication and display result
    printf("%dM=\n", scalar);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j] * scalar);
        }
        printf("\n");
    }
    
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
