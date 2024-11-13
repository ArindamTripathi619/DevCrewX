/*
QUESTION:
Write a C program to count the number of even elements present in a 1-D array using a function countEven.
*/

#include <stdio.h>

// Function to count even elements in an array
int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
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
    
    // Display the count of even elements
    printf("Number of even elements in the array: %d\n", countEven(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 4 21 16 33 40
Number of even elements in the array: 3
*/
