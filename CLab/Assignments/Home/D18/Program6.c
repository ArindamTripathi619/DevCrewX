/*
QUESTION:
Write a function to reverse the elements of an array using recursion.
*/

#include <stdio.h>

// Recursive function to reverse the array
void reverseArray(int arr[], int start, int end) {
    if(start >= end)
        return;
    
    // Swap the elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    // Recursive call for the next pair
    reverseArray(arr, start + 1, end - 1);
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
    
    // Display the original array
    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Reverse the array using recursion
    reverseArray(arr, 0, n - 1);
    
    // Display the reversed array
    printf("Reverse of the array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 4 21 15 23 14
Original array: 4 21 15 23 14
Reverse of the array: 14 23 15 21 4
*/
