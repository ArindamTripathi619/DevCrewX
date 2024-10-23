/*
QUESTION:
WAP to find the sum of the minor diagonal of a matrix. The user has to input the size and elements of the matrix, and the program calculates the sum of the elements in the minor diagonal (the diagonal from top-right to bottom-left).
*/

#include <stdio.h>

int main() {
    int r, c, i, sum = 0;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Matrix must be square to calculate the minor diagonal sum.\n");
        return 0;
    }
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of the minor diagonal
    for (i = 0; i < r; i++) {
        sum += matrix[i][r - i - 1];  // Minor diagonal element
    }
    
    // Display the sum
    printf("Sum of the minor diagonal of the matrix: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 5 5
Enter the elements of the matrix:
3 2 1 4 3
6 5 4 2 2
5 7 9 6 4
4 2 4 3 1
2 4 5 6 8
Sum of the minor diagonal of the matrix: 18
*/
