/*
QUESTION:
WAP to multiply two matrices and display it. The user has to input the size and elements of two matrices, and the program computes and displays their product if the matrices are compatible for multiplication.
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    // Input size of matrix 1
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    
    // Input size of matrix 2
    printf("Enter the row and column size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrices are not compatible for multiplication.\n");
        return 0;
    }
    
    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];
    
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
    
    // Initialize product matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }
    
    // Multiply the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Display the product matrix
    printf("Product of Matrix 1 and Matrix 2:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix 1: 3 3
Enter the row and column size of matrix 2: 3 2
Enter the elements of matrix 1:
2 4 2
1 3 1
4 3 1
Enter the elements of matrix 2:
1 2
3 2
2 3
Product of Matrix 1 and Matrix 2:
18 18
12 11
15 17

Enter the row and column size of matrix 1: 3 4
Enter the row and column size of matrix 2: 3 2
Matrices are not compatible for multiplication.
*/
