/*
QUESTION:
WAP to interchange diagonals of a matrix. The user has to input the size and elements of the matrix, and the program swaps the elements of the main diagonal with those of the minor diagonal.
*/

#include <stdio.h>

int main() {
    int r, c, i, temp;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Matrix must be square to interchange diagonals.\n");
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
    
    // Display the original matrix
    printf("The given matrix is:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Interchange diagonals
    for (i = 0; i < r; i++) {
        temp = matrix[i][i];  // Main diagonal element
        matrix[i][i] = matrix[i][r - i - 1];  // Swap with minor diagonal element
        matrix[i][r - i - 1] = temp;
    }
    
    // Display matrix after interchanging diagonals
    printf("After interchanging the diagonals, the given matrix is:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 4 4
Enter the elements of the matrix:
3 2 1 4
6 5 4 2
5 7 9 6
4 2 4 3
The given matrix is:
3 2 1 4
6 5 4 2
5 7 9 6
4 2 4 3
After interchanging the diagonals, the given matrix is:
4 2 1 3
6 4 5 2
5 9 7 6
3 2 4 4
*/
