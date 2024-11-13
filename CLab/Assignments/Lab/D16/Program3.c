/*
QUESTION:
Write a C program to determine the largest and smallest elements of a 1-D array. Use functions findLargest and findSmallest.
*/

#include <stdio.h>

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to find the smallest element in an array
int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
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
    
    // Display the largest and smallest elements
    printf("Largest element of the given array: %d\n", findLargest(arr, n));
    printf("Smallest element of the given array: %d\n", findSmallest(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 33 21 45 23 40
Largest element of the given array: 45
Smallest element of the given array: 21
*/
