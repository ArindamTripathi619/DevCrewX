/*
QUESTION:
WAP to interchange the columns in the matrix. The user has to enter the order of the matrix, the elements of the matrix, and the two column numbers to interchange. The program should display the matrix before and after the column interchange.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, col1, col2, temp;
    
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
    
    // Input column numbers to interchange
    printf("Enter the column numbers to interchange: ");
    scanf("%d %d", &col1, &col2);
    
    // Display matrix before interchange
    printf("Elements of the matrix before column interchange:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Interchange the columns
    for (i = 0; i < r; i++) {
        temp = matrix[i][col1 - 1];
        matrix[i][col1 - 1] = matrix[i][col2 - 1];
        matrix[i][col2 - 1] = temp;
    }
    
    // Display matrix after interchange
    printf("Elements of the matrix after column interchange:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
3 2 1
6 5 4
5 7 9
Enter the column numbers to interchange: 1 3
Elements of the matrix before column interchange:
3 2 1
6 5 4
5 7 9
Elements of the matrix after column interchange:
1 2 3
4 5 6
9 7 5
*/
