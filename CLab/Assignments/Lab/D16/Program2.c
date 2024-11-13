/*
QUESTION:
WAP to sort the elements of an array in ascending order by using a user-defined function for sorting. Use two functions: one to sort and one to display the array.
*/

#include <stdio.h>

// Function to sort the array in ascending order
void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the array
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
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display array before sorting
    printf("Before sorting the elements of the array are: ");
    displayArray(arr, n);
    
    // Sort and display the array
    sortArray(arr, n);
    printf("After sorting the elements of the array are: ");
    displayArray(arr, n);
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 33 21 45 23 49
Before sorting the elements of the array are: 33 21 45 23 49
After sorting the elements of the array are: 21 23 33 45 49
*/
