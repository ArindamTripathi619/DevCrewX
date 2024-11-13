/*
QUESTION:
Write a C program to find out the maximum element of an integer array by using a recursive function.
*/

#include <stdio.h>

// Recursive function to find the maximum element
int findMax(int arr[], int size) {
    // Base case: If the array has only one element
    if (size == 1)
        return arr[0];
    
    // Recursive case: Find the maximum in the remaining array
    int max = findMax(arr, size - 1);
    
    // Compare the last element with the maximum of the remaining array
    if (arr[size - 1] > max)
        return arr[size - 1];
    else
        return max;
}

int main() {
    int n;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find and display the maximum element
    printf("Maximum element of the array: %d\n", findMax(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 4 21 15 23 14
Maximum element of the array: 23
*/
