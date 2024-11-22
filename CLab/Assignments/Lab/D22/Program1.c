/*
QUESTION:
Write a C program to compute the sum of all elements in an array using dynamic memory allocation.
Input: Enter the number of elements: 5
       Enter 5 elements: 10 20 30 40 50
Output: Sum of the elements: 150
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Input array elements
    if (arr != NULL) {
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        // Output the sum
        printf("Sum of the elements: %d\n", sum);

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
Enter 5 elements: 10 20 30 40 50
Sum of the elements: 150
*/
