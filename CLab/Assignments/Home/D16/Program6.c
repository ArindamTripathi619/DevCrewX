/*
QUESTION:
Write a C program to calculate and display the sum of each row of a 2-D array using a function sumRows.
*/

#include <stdio.h>

// Function to calculate and display the sum of each row
void sumRows(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
}

int main() {
    int rows, cols;
    
    // Input the dimensions of the 2-D array
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[10][10];
    
    // Input the elements of the 2-D array
    printf("Enter the elements of the 2-D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Calculate and display the sum of each row
    sumRows(arr, rows, cols);
    
    return 0;
}

/*
OUTPUT:
Enter the number of rows and columns: 3 4
Enter the elements of the 2-D array:
1 2 3 4
5 6 7 8
9 1 3 5
Sum of row 1 = 10
Sum of row 2 = 26
Sum of row 3 = 18
*/
