/*
Given an array of integers of size n and an integer d, the task is to rotate
 the array elements to the left by d positions.
 Input: Enter the array size: 5
 Enter 5 elements: 3 6 1 8 5
 Enter the value of d: 2
 Output: Array before rotation: 3 6 1 8 5
 Array after rotation by 2 positions: 1 8 5 3 6
*/

#include <stdio.h>

int main() {
    int size, d, i;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of d: ");
    scanf("%d", &d);
    d = d % size; // Adjust d to be within the array size
    int temp[d];
    // Copy the first d elements to a temporary array
    for (i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    // Shift the remaining elements to the left by d positions
    for (i = d; i < size; i++) {
        arr[i - d] = arr[i];
    }
    // Copy the temporary array back to the original array
    for (i = 0; i < d; i++) {
        arr[size - d + i] = temp[i];
    }
    printf("Array before rotation: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArray after rotation by %d positions: ", d);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 7 3 9 2 0
Enter the value of d: 3
Array before rotation: 2 0 7 3 9 
Array after rotation by 3 positions: 2 0 7 3 9 
*/
