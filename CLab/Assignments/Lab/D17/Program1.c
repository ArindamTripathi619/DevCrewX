/*
QUESTION:
Write a C program to determine the sum of elements of a 2-D array using a function twoDArrSum.
*/

#include <stdio.h>

// Function to calculate the sum of elements in a 2-D array
int twoDArrSum(int arr[][10], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int rows, cols;
    
    // Input dimensions of the array
    printf("Enter the row and column size of the 2-D array: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[10][10];
    
    // Input the elements of the array
    printf("Enter the elements of the 2-D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Display the sum of elements
    printf("Sum of the elements of the 2-D array = %d\n", twoDArrSum(arr, rows, cols));
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the 2-D array: 3 4
Enter the elements of the 2-D array:
1 2 0 2
0 0 4 1
5 7 0 3
Sum of the elements of the 2-D array = 25
*/
