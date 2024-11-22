/*
QUESTION:
Write a C program to find the largest element stored in an array using dynamic memory allocation.
Input: Enter the number of elements: 5
       Enter 5 elements: 14 35 24 14 5
Output: Largest element: 35
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, largest;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    if (arr != NULL) {
        // Input array elements
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Find the largest element
        largest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        // Output the largest element
        printf("Largest element: %d\n", largest);

        // Free allocated memory
        free(arr);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

/*
OUTPUT:
Enter the number of elements: 5
Enter 5 elements: 14 35 24 14 5
Largest element: 35
*/
