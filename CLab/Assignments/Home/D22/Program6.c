/*
QUESTION:
Write a C program to allocate a 2D integer array dynamically to store Pascal's Triangle depending on the number of rows inputted by the user. The number of columns in each row varies.
Input: Enter the number of rows of the Pascal’s Triangle: 5
Output: Pascal’s Triangle of 5 rows:
       1
       1 1
       1 2 1
       1 3 3 1
       1 4 6 4 1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, **triangle;

    // Input the number of rows
    printf("Enter the number of rows of the Pascal’s Triangle: ");
    scanf("%d", &rows);

    // Dynamically allocate memory for the Pascal's Triangle
    triangle = (int **)malloc(rows * sizeof(int *));
    if (triangle == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        triangle[i] = (int *)malloc((i + 1) * sizeof(int));
        if (triangle[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Output Pascal's Triangle
    printf("Pascal’s Triangle of %d rows:\n", rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(triangle[i]);
    }
    free(triangle);

    return 0;
}

/*
OUTPUT:
Enter the number of rows of the Pascal’s Triangle: 5
Pascal’s Triangle of 5 rows:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
