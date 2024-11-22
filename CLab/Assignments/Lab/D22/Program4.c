/*
QUESTION:
Write a C program to dynamically allocate a 2D array depending on the number of rows and columns.
Input: Enter the number of rows and columns of the 2D array: 4 3
       Enter the elements of the 2D array:
       1 2 3
       4 5 6
       2 3 4
       7 6 8
Output: Enter the elements of the 2D array:
       1 2 3
       4 5 6
       2 3 4
       7 6 8
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, **arr;

    // Input rows and columns
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for the 2D array
    arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input elements
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output the array
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

/*
OUTPUT:
Enter the number of rows and columns of the 2D array: 4 3
Enter the elements of the 2D array:
1 2 3
4 5 6
2 3 4
7 6 8
Elements of the 2D array:
1 2 3
4 5 6
2 3 4
7 6 8
*/
