/*
QUESTION:
WAP to design a user-defined function to calculate the sum of the elements of an integer array.
*/

#include <stdio.h>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
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
    
    // Display the sum of array elements
    printf("Sum of the elements of the array = %d\n", sumArray(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 33 21 45 23 49
Sum of the elements of the array = 171
*/
