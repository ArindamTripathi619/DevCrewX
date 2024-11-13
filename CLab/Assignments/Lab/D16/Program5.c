/*
QUESTION:
Write a C program to read two single-dimensional arrays, multiply them element-wise, and print the result. Use three functions: readArr, dispArr, and mulArr.
*/

#include <stdio.h>

// Function to read array elements
void readArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display array elements
void dispArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to multiply two arrays element-wise
void mulArr(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int n;
    
    // Input the array size
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], result[n];
    
    // Input elements of the first array
    printf("Enter the elements of the first array: ");
    readArr(arr1, n);
    
    // Input elements of the second array
    printf("Enter the elements of the second array: ");
    readArr(arr2, n);
    
    // Display the first array
    printf("First array: ");
    dispArr(arr1, n);
    
    // Display the second array
    printf("Second array: ");
    dispArr(arr2, n);
    
    // Multiply arrays element-wise and display the result
    mulArr(arr1, arr2, result, n);
    printf("Product of first and second array: ");
    dispArr(result, n);
    
    return 0;
}

/*
OUTPUT:
Enter the size of the arrays: 5
Enter the elements of the first array: 3 2 1 4 5
Enter the elements of the second array: 4 2 0 3 5
First array: 3 2 1 4 5
Second array: 4 2 0 3 5
Product of first and second array: 12 4 0 12 25
*/
