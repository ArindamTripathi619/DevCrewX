/*
QUESTION:
Write a C program to dynamically allocate an array using calloc, store elements, modify its size, and free memory.
Input: Enter the number of elements: 5
       Enter 5 elements: 14 35 24 14 5
       Enter the number of more elements you want to store: 3
       Enter the 3 elements: 10 20 23
Output: Elements are: 14 35 24 14 5 10 20 23
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, more, newSize;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr != NULL) {
        // Input array elements
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // Output the initial array
        printf("Elements are: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Resize the array
        printf("Enter the number of more elements you want to store: ");
        scanf("%d", &more);
        newSize = n + more;

        arr = (int *)realloc(arr, newSize * sizeof(int));

        // Input new elements
        printf("Enter the %d elements: ", more);
        for (int i = n; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }

        // Output the final array
        printf("Elements are: ");
        for (int i = 0; i < newSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

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
Elements are: 14 35 24 14 5
Enter the number of more elements you want to store: 3
Enter the 3 elements: 10 20 23
Elements are: 14 35 24 14 5 10 20 23
*/
