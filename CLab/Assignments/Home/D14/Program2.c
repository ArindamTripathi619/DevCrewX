/*
QUESTION:
WAP to return only the unique rows from a given binary matrix. The user has to input the order and elements of the matrix, and the program displays the unique rows.
*/

#include <stdio.h>

int areRowsEqual(int row1[], int row2[], int c) {
    for (int i = 0; i < c; i++) {
        if (row1[i] != row2[i]) {
            return 0;  // Rows are not equal
        }
    }
    return 1;  // Rows are equal
}

int main() {
    int r, c, i, j, k, is_unique;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the binary matrix
    printf("Enter the elements of the binary matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the matrix
    printf("The given matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Find and display unique rows
    printf("The unique rows of the given matrix are:\n");
    for (i = 0; i < r; i++) {
        is_unique = 1;  // Assume the row is unique
        
        // Check if the row matches any previous row
        for (k = 0; k < i; k++) {
            if (areRowsEqual(matrix[i], matrix[k], c)) {
                is_unique = 0;
                break;
            }
        }
        
        // If the row is unique, print it
        if (is_unique) {
            for (j = 0; j < c; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 4 5
Enter the elements of the binary matrix:
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The given matrix is:
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The unique rows of the given matrix are:
0 1 0 0 1
1 0 1 1 0
1 0 1 0 0
*/
