/*
QUESTION:
WAP to reverse the elements of a single-dimensional array using a function named revArr.
*/

#include <stdio.h>

// Function to reverse the array elements
void revArr(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
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
    
    // Reverse and display the array
    revArr(arr, n);
    printf("Reverse of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 33 21 45 23 40
Original array: 33 21 45 23 40
Reverse of the array: 40 23 45 21 33
*/
