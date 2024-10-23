/*
QUESTION:
WAP to find the row with the maximum number of 1s in a matrix. The user has to input the order and elements of the matrix, and the program identifies the row with the maximum number of 1s.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, max_ones = 0, row_index = -1;
    
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
    
    // Find the row with the maximum number of 1s
    for (i = 0; i < r; i++) {
        int count = 0;
        for (j = 0; j < c; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
        if (count > max_ones) {
            max_ones = count;
            row_index = i;
        }
    }
    
    // Display the row with the maximum number of 1s
    printf("The given 2D array is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("The index of the row with the maximum 1’s is: %d\n", row_index);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 5 5
Enter the elements of the matrix:
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The given 2D array is:
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The index of the row with the maximum 1’s is: 1
*/
