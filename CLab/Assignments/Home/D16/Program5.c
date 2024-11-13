/*
QUESTION:
Write a C program to copy the elements of a 1-D array into another array using a function copyArray.
*/

#include <stdio.h>

// Function to copy elements from one array to another
void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

// Function to display array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    // Input the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int source[n], destination[n];
    
    // Input the array elements
    printf("Enter the elements of the source array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    
    // Copy elements and display both arrays
    copyArray(source, destination, n);
    printf("Source array: ");
    displayArray(source, n);
    
    printf("Destination array: ");
    displayArray(destination, n);
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the elements of the source array: 3 21 16 33 40
Source array: 3 21 16 33 40
Destination array: 3 21 16 33 40
*/
