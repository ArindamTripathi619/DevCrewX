/*
QUESTION:
WAP to check two matrices are equal or not. The user has to enter the order of two matrices and elements of two matrices. Then, these two matrices are compared.
- If both matrix size and corresponding elements are equal, display that the two matrices are equal.
- If sizes are equal but elements differ, display that the matrices can be compared but are not equal.
- If sizes are not equal, display that the matrices cannot be compared.
*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, equal = 1;
    
    // Input size of both matrices
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the row and column size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    
    if (r1 != r2 || c1 != c2) {
        printf("Given matrices cannot be compared.\n");
        return 0;
    }
    
    int matrix1[r1][c1], matrix2[r2][c2];
    
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
    
    // Compare the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                equal = 0;
                break;
            }
        }
    }
    
    if (equal) {
        printf("Both the matrices are equal.\n");
    } else {
        printf("The matrices can be compared but are not equal.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix 1: 3 3
Enter the row and column size of matrix 2: 3 3
Enter the elements of matrix 1:
0 2 0
0 0 4
5 7 0
Enter the elements of matrix 2:
0 2 0
0 0 4
5 7 0
Both the matrices are equal.

Enter the row and column size of matrix 1: 3 3
Enter the row and column size of matrix 2: 3 3
Enter the elements of matrix 1:
0 2 0
6 5 4
5 7 9
Enter the elements of matrix 2:
0 2 0
0 0 4
5 7 0
The matrices can be compared but are not equal.
hello
*/
