/*
WAP to remove the duplicate elements present in the array.
 Input: Enter the array size: 10
 Enter 10 elements: 3 6 7 3 5 4 8 3 1 7
 Output: Initial Array: 3 6 7 3 5 4 8 3 1 7
 Array after removing duplicate elements: 3 6 7 5 4 8 1
*/

#include <stdio.h>

int main() {
    int size, i, j, k;

    // Input the size of the arrayṭ
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the initial array
    printf("Initial Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            // If a duplicate element is found
            if (arr[i] == arr[j]) {
                // Shift all elements to the left
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Reduce array size after removing duplicate
                j--;    // Stay at the current position for the next comparison
            }
        }
    }

    // Display the array after removing duplicates
    printf("Array after removing duplicate elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 3 9 3 5 6
Initial Array: 3 9 3 5 6 
Array after removing duplicate elements: 3 9 5 6
*/
