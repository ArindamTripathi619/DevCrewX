/*
QUESTION:
WAP to find out the count of even and odd numbers in a matrix. The user has to input the size and elements of the matrix, and the program counts and displays the number of even and odd elements.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, even_count = 0, odd_count = 0;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    
    // Display result
    printf("Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 3
Enter the elements of the matrix:
1 0 10
4 1 2
5 8 1
Matrix:
1 0 10
4 1 2
5 8 1
Number of even elements: 4
Number of odd elements: 5
*/
