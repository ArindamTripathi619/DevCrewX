/*
QUESTION:
WAP that fills a five-by-five matrix as follows:
- Upper left triangle with +1s
- Lower right triangle with -1s
- Right to left diagonal with zeros
*/

#include <stdio.h>

int main() {
    int matrix[5][5], i, j;
    
    // Fill the matrix based on conditions
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i < j) {
                matrix[i][j] = 1;  // Upper left triangle
            } else if (i > j) {
                matrix[i][j] = -1;  // Lower right triangle
            } else {
                matrix[i][j] = 0;  // Right to left diagonal
            }
        }
    }
    
    // Display the matrix
    printf("The 5x5 matrix is:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
0 1 1 1 1
-1 0 1 1 1
-1 -1 0 1 1
-1 -1 -1 0 1
-1 -1 -1 -1 0
*/
