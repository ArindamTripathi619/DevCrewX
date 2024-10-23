/*
QUESTION:
WAP to read a matrix and find the sum of the elements of that matrix. The user has to input the order and elements of the matrix, and the program calculates and displays the sum of the elements.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add each element to the sum
        }
    }
    
    // Display the sum of the matrix elements
    printf("Sum of the elements of the matrix: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 3 4
Enter the elements of the matrix:
2 4 5 7
1 3 2 1
4 3 8 9
Sum of the elements of the matrix: 49
*/
