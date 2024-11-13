/*
QUESTION:
Write a C program to count the number of negative elements present in a 1-D array using a function countNegative.
*/

#include <stdio.h>

// Function to count negative elements in an array
int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
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
    
    // Display the count of negative elements
    printf("Number of negative elements in the array: %d\n", countNegative(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: -3 21 -16 33 -5
Number of negative elements in the array: 3
*/
