/*
QUESTION:
Write a C program to allocate a non-uniform 2D float array dynamically. Read the number of columns for each row, store the elements, and display them.
Input: Enter the number of rows of the 2D array: 3
       Enter the column size of row 1: 3
       Enter 3 elements: 1 2 3
       Enter the column size of row 2: 4
       Enter 4 elements: 4 2 3 5
       Enter the column size of row 3: 5
       Enter 5 elements: 6 2 3 9 8
Output: Elements of the 2D array:
       1 2 3
       4 2 3 5
       6 2 3 9 8
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, *cols;
    float **array;

    // Input the number of rows
    printf("Enter the number of rows of the 2D array: ");
    scanf("%d", &rows);

    // Allocate memory for the number of columns in each row
    cols = (int *)malloc(rows * sizeof(int));
    array = (float **)malloc(rows * sizeof(float *));
    if (cols == NULL || array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input column sizes and allocate memory for each row
    for (int i = 0; i < rows; i++) {
        printf("Enter the column size of row %d: ", i + 1);
        scanf("%d", &cols[i]);
        array[i] = (float *)malloc(cols[i] * sizeof(float));
        if (array[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        // Input row elements
        printf("Enter %d elements: ", cols[i]);
        for (int j = 0; j < cols[i]; j++) {
            scanf("%f", &array[i][j]);
        }
    }

    // Output the 2D array
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            printf("%.1f ", array[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    free(cols);

    return 0;
}

/*
OUTPUT:
Enter the number of rows of the 2D array: 3
Enter the column size of row 1: 3
Enter 3 elements: 1 2 3
Enter the column size of row 2: 4
Enter 4 elements: 4 2 3 5
Enter the column size of row 3: 5
Enter 5 elements: 6 2 3 9 8
Elements of the 2D array:
1.0 2.0 3.0
4.0 2.0 3.0 5.0
6.0 2.0 3.0 9.0 8.0
*/
