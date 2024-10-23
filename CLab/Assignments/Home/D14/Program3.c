/*
QUESTION:
WAP to find the sum of the lower triangular matrix. The user has to input the size and elements of the matrix, and the program calculates the sum of the elements in the lower triangular part.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    
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
    
    // Calculate the sum of the lower triangular matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j <= i; j++) {  // Only elements below and on the diagonal
            sum += matrix[i][j];
        }
    }
    
    // Display the sum
    printf("Sum of the lower triangular matrix: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
3 2 1
6 5 4
5 7 9
Sum of the lower triangular matrix: 35
*/
