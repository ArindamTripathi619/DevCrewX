/*
QUESTION:
Write a C program to print the position and values of all the saddle points of a matrix using a function printSaddle. An element of a matrix is called a saddle point if it is the maximum of its row and the minimum of its column.
*/

#include <stdio.h>

// Function to print saddle points
void printSaddle(int matrix[][10], int rows, int cols) {
    int isSaddle = 0;
    
    for(int i = 0; i < rows; i++) {
        // Find the minimum element in the current row
        int min = matrix[i][0];
        int minCol = 0;
        for(int j = 1; j < cols; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
                minCol = j;
            }
        }
        
        // Check if this minimum element is the maximum in its column
        int isMax = 1;
        for(int k = 0; k < rows; k++) {
            if(matrix[k][minCol] > min) {
                isMax = 0;
                break;
            }
        }
        
        if(isMax) {
            printf("Saddle Point found at position (%d, %d) with value %d\n", i+1, minCol+1, matrix[i][minCol]);
            isSaddle = 1;
        }
    }
    
    if(!isSaddle) {
        printf("No Saddle Points found in the matrix.\n");
    }
}

int main() {
    int rows, cols;
    
    // Input dimensions of the matrix
    printf("Enter the row and column size of matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10];
    
    // Input the elements of the matrix
    printf("Enter the elements of matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display Saddle Points
    printf("Saddle Points:\n");
    printSaddle(matrix, rows, cols);
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of matrix: 3 4
Enter the elements of matrix:
2 4 6 7
1 3 5 8
4 3 2 1
Saddle Points:
Saddle Point found at position (1, 4) with value 7
Saddle Point found at position (2, 4) with value 8
Saddle Point found at position (3, 1) with value 4
*/
