/*
QUESTION:
Write a recursive function to search an element in an array using Linear Search.
*/

#include <stdio.h>

// Recursive function for linear search
int linearSearch(int arr[], int size, int target, int index) {
    if (index == size) return -1; // Not found
    if (arr[index] == target) return index; // Found
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int n, target;
    
    // Input the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to search
    printf("Enter the searching element: ");
    scanf("%d", &target);
    
    // Perform the search and display the result
    int result = linearSearch(arr, n, target, 0);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter the size of the array: 5
Enter the array elements: 4 21 15 23 14
Enter the searching element: 15
Element found at index 2

OUTPUT 2:
Enter the size of the array: 5
Enter the array elements: 4 21 15 23 14
Enter the searching element: 50
Element not found
*/
