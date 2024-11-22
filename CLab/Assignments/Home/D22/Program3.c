/*
QUESTION:
Write a C program to read elements of an integer array using dynamic memory allocation. Create two arrays to store even and odd elements separately and print both arrays.
Input: Enter the number of elements: 10
       Enter 10 elements: 11 20 34 41 52 26 39 90 30 21
Output: Even Array: 20 34 52 26 90 30
        Odd Array: 11 41 39 21
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *evenArr, *oddArr;
    int evenCount = 0, oddCount = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Allocate memory for even and odd arrays
    evenArr = (int *)malloc(evenCount * sizeof(int));
    oddArr = (int *)malloc(oddCount * sizeof(int));

    // Separate elements into even and odd arrays
    int evenIndex = 0, oddIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenIndex++] = arr[i];
        } else {
            oddArr[oddIndex++] = arr[i];
        }
    }

    // Output the even and odd arrays
    printf("Even Array: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Odd Array: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    free(evenArr);
    free(oddArr);

    return 0;
}

/*
OUTPUT:
Enter the number of elements: 10
Enter 10 elements: 11 20 34 41 52 26 39 90 30 21
Even Array: 20 34 52 26 90 30
Odd Array: 11 41 39 21
*/
