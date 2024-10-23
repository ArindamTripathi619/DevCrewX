/*
QUESTION:
WAP to find the transpose of a given matrix. The user has to input the size and elements of the matrix, and the program calculates and displays the transpose of the matrix.
*/

#include <stdio.h>

int main() {
    int r, c, i, j;
    
    // Input matrix size
    printf("Enter the row and column size of matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c], transpose[c][r];
    
    // Input elements of the matrix
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the transpose
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Display the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Display the transpose
    printf("Transpose of the given Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix: 3 3
Enter the elements of matrix:
2 4 2
1 3 1
4 3 1
Original Matrix:
2 4 2
1 3 1
4 3 1
Transpose of the given Matrix:
2 1 4
4 3 3
2 1 1
*/
