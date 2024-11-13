/*
QUESTION:
Write a C program to swap the largest and smallest elements of a 1-D array using a function swap.
*/

#include <stdio.h>

// Function to swap largest and smallest elements in an array
void swap(int arr[], int size) {
    int maxIdx = 0, minIdx = 0;
    
    // Find the indexes of the largest and smallest elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIdx]) maxIdx = i;
        if (arr[i] < arr[minIdx]) minIdx = i;
    }
    
    // Swap the largest and smallest elements
    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;
}

int main() {
    int n;
    
    // Input the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Swap and display the modified array
    swap(arr, n);
    printf("Array after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 24 21 15 23 40
Original array: 24 21 15 23 40
Array after swapping: 24 21 40 23 15
*/
