/*
QUESTION:
Write a C program to read the elements of an integer array using dynamic memory allocation, multiply each element by a constant using a function, and display the results.
Input: Enter the number of elements: 5
       Enter 5 elements: 10 20 30 40 50
       Enter a constant: 5
Output: Elements of the array are: 50 100 150 200 250
*/

#include <stdio.h>
#include <stdlib.h>

void multiplyArray(int *arr, int n, int constant) {
    for (int i = 0; i < n; i++) {
        arr[i] *= constant;
    }
}

int main() {
    int n, constant, *arr;

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
    }

    // Input the constant
    printf("Enter a constant: ");
    scanf("%d", &constant);

    // Multiply array elements by the constant
    multiplyArray(arr, n, constant);

    // Output the modified array
    printf("Elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}

/*
OUTPUT:
Enter the number of elements: 5
Enter 5 elements: 10 20 30 40 50
Enter a constant: 5
Elements of the array are: 50 100 150 200 250
*/
