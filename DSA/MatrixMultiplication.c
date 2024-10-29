#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    
    // Input size of both matrices
    printf("Enter the row and column size of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter the row and column size of matrix 2: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Matrices are not compatible for multiplication.\n");
        return 0;
    }

    int r3=r1,c3=c2;
    int sum = 0;
    
    int a[r1][c1], b[r2][c2], c[r3][c3];
    
    // Input elements of matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Input elements of matrix 2
    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Compute the c of the matrices
    for(int i=0;i<r3;i++) {
        for(int j=0;j<c3;j++) {
            for(int k=0;k<r2;k++) {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    
    // Display the c matrix
    printf("c of Matrix 1 and Matrix 2:\n");
    for (i = 0; i < r3; i++) {
        for (j = 0; j < c3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}