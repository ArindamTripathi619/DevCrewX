/*
QUESTION:
Write a C program to copy the elements of one integer array into another array using pointers.
Input: Enter the array size: 5
       Enter the elements of the first array: 4 1 6 3 9
Output: After copying elements of the first array: 4 1 6 3 9
        Elements of the second array: 4 1 6 3 9
*/

#include <stdio.h>

int main() {
    int n, arr1[100], arr2[100];
    int *p1, *p2;

    // Input array size and elements
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements using pointers
    p1 = arr1;
    p2 = arr2;
    for (int i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);
    }

    // Output copied arrays
    printf("After copying elements of the first array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Elements of the second array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

/*
OUTPUT:
Enter the array size: 5
Enter the elements of the first array: 4 1 6 3 9
After copying elements of the first array: 4 1 6 3 9
Elements of the second array: 4 1 6 3 9
*/
