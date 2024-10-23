/*
QUESTION:
WAP to search for an element in a row-wise and column-wise sorted matrix. The user has to input the size and elements of the matrix, along with the element to search. The program should return the position of the element if found.
*/

#include <stdio.h>

int main() {
    int r, c, i, j, search_element, found = 0;
    
    // Input matrix size
    printf("Enter the row and column size of the matrix: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    // Input elements of the matrix
    printf("Enter the elements of the row-wise and column-wise sorted matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &search_element);
    
    // Search the matrix
    for (i = 0; i < r && !found; i++) {
        for (j = 0; j < c; j++) {
            if (matrix[i][j] == search_element) {
                printf("The element found at the position in the matrix is: %d, %d\n", i, j);
                found = 1;
                break;
            }
        }
    }
    
    if (!found) {
        printf("Element not found in the matrix.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Enter the row and column size of the matrix: 4 4
Enter the elements of the row-wise and column-wise sorted matrix:
15 23 31 39
18 26 36 43
25 28 37 48
30 34 39 50
Enter the element to search: 37
The element found at the position in the matrix is: 2, 2
*/
