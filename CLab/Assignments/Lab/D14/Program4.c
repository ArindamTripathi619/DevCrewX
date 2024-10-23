/*
QUESTION:
WAP to find the normal of a matrix. The normal of a matrix is the square root of the sum of squares of all matrix elements. The user has to input the order and elements of the matrix, and the program calculates and displays the normal of the matrix.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int r, c, i, j;
    double sum = 0, normal;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j] * matrix[i][j];  // Sum of squares
        }
    }
    
    // Calculate normal
    normal = sqrt(sum);
    
    // Display the normal of the matrix
    printf("Normal of the given matrix: %.3lf\n", normal);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
3 2 1
6 5 4
5 7 9
Normal of the given matrix: 15.684
*/
