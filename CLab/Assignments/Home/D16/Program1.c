/*
QUESTION:
Write a C program to find the sum of only odd values in a 1-D array using a function oddSum.
*/

#include <stdio.h>

// Function to calculate the sum of odd numbers in an array
int oddSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
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
    
    // Display the sum of odd numbers
    printf("Sum of the odd numbers present in the given array: %d\n", oddSum(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 4 21 15 23 40
Sum of the odd numbers present in the given array: 59
*/
