/*
QUESTION:
WAP to add two matrices and display it. The user has to input the size and elements of two matrices, and the program computes and displays their sum if they are of the same size.
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    
    // Input size of both matrices
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the row and column size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    
    if (r1 != r2 || c1 != c2) {
        printf("Matrices are not compatible for addition.\n");
        return 0;
    }
    
    int matrix1[r1][c1], matrix2[r2][c2], sum[r1][c1];
    
    // Input elements of matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input elements of matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Compute the sum of the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display the sum matrix
    printf("Sum of Matrix 1 and Matrix 2:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix 1: 3 2
Enter the row and column size of matrix 2: 3 2
Enter the elements of matrix 1:
2 4
1 3
4 3
Enter the elements of matrix 2:
1 2
3 2
2 3
Sum of Matrix 1 and Matrix 2:
3 6
4 5
6 6

Enter the row and column size of matrix 1: 3 4
Enter the row and column size of matrix 2: 3 2
Matrices are not compatible for addition.
*/
