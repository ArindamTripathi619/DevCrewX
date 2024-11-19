/*
QUESTION:
Write a C program to compare the elements of two arrays using pointers.
Input 1: Enter the array size: 5
         Enter the elements of the first array: 4 1 6 3 9
         Enter the elements of the second array: 4 1 6 3 9
Output 1: Given two arrays are same.
Input 2: Enter the array size: 5
         Enter the elements of the first array: 5 1 6 3 9
         Enter the elements of the second array: 5 1 7 3 9
Output 2: Two arrays are different.
*/

#include <stdio.h>

int compareArrays(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return 0; // Arrays are different
        }
    }
    return 1; // Arrays are same
}

int main() {
    int n, arr1[100], arr2[100];

    // Input array size and elements
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays
    if (compareArrays(arr1, arr2, n)) {
        printf("Given two arrays are same.\n");
    } else {
        printf("Two arrays are different.\n");
    }

    return 0;
}

/*
OUTPUT 1:
Enter the array size: 5
Enter the elements of the first array: 4 1 6 3 9
Enter the elements of the second array: 4 1 6 3 9
Given two arrays are same.

OUTPUT 2:
Enter the array size: 5
Enter the elements of the first array: 5 1 6 3 9
Enter the elements of the second array: 5 1 7 3 9
Two arrays are different.
*/
