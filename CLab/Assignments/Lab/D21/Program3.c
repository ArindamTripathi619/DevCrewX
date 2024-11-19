/*
QUESTION:
Write a C program to compute the sum of all elements in an array using a pointer.
Input: Enter the array size: 5
       Enter the elements of the array: 4 1 6 3 9
Output: Sum of the elements of the array: 23
*/

#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;
    int *p;

    // Input array size
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Use pointer to calculate the sum
    p = arr;
    for (int i = 0; i < n; i++) {
        sum += *(p + i);
    }

    // Output the sum
    printf("Sum of the elements of the array: %d\n", sum);

    return 0;
}

/*
OUTPUT:
Enter the array size: 5
Enter the elements of the array: 4 1 6 3 9
Sum of the elements of the array: 23
*/
