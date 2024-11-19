/*
QUESTION:
Write a C program to sort an integer array using a pointer.
Input: Enter the array size: 5
       Enter the elements of the array: 4 1 6 3 9
Output: Before sorting the elements of the array are: 4 1 6 3 9
        After sorting the elements of the array are: 1 3 4 6 9
*/

#include <stdio.h>

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n, arr[100];

    // Input array size and elements
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Before sorting
    printf("Before sorting the elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array
    sortArray(arr, n);

    // After sorting
    printf("After sorting the elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
OUTPUT:
Enter the array size: 5
Enter the elements of the array: 4 1 6 3 9
Before sorting the elements of the array are: 4 1 6 3 9
After sorting the elements of the array are: 1 3 4 6 9
*/
