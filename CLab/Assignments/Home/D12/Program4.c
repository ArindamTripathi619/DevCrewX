/*
WAPtosort the elements of an array in descending order.
 Input: Enter the array size: 5
 Enter 5 elements: 3 6 1 8 5
 Output: Before sorting elements are: 3 6 1 8 5
 After sorting elements are: 8 6 5 3 1
*/

#include <stdio.h>

int main() {
    int size, i, j, temp;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Bubble Sort algorithm to sort the array in descending order
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting elements are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 3 8 9 2 5
Before sorting elements are: 3 8 9 2 5 
After sorting elements are: 9 8 5 3 2 
*/
