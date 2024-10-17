/*
WAP to swap the pair of elements starting from the beginning.
 Input 1: Enter the array size: 10
 Enter 10 elements: 3 16 11 8 15 4 12 34 51 7
 Output 1: Before swapping elements are: 3 16 11 8 15 4 12 34 51 7
 After swapping elements are: 16 3 8 11 4 15 34 12 7 51
 Input 2: Enter the array size: 5
 Enter 5 elements: 3 6 1 8 5
 Output 2: Before swapping elements are: 3 6 1 8 5
 After swapping elements are: 6 3 8 1 5
*/

#include <stdio.h>

int main() {
    int size, i, temp;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array before swapping
    printf("Before swapping elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Swap elements in pairs
    for (i = 0; i < size - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Display the array after swapping
    printf("After swapping elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 6 8 3 0 2
Before swapping elements are: 6 8 3 0 2 
After swapping elements are: 8 6 0 3 2
*/
