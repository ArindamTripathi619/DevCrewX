/*
WAP to delete an element from a desired position from an array.
 Input: Enter the array size: 5
 Enter 5 elements: 3 16 11 8 15
 Enter the position of the element to be deleted: 4
 Output: Array elements before deletion: 3 16 11 8 15
         Array elements after deletion: 3 16 11 15
*/

#include <stdio.h>

int main() {
    int size, pos, i;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    // Validate position (1-based index)
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Display array before deletion
    printf("Array elements before deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift elements to the left to delete the element at the desired position
    for (i = pos - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the array size after deletion
    size--;

    // Display array after deletion
    printf("Array elements after deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 6 1 2 0 9 
Enter the position of the element to be deleted: 4
Array elements before deletion: 6 1 2 0 9 
Array elements after deletion: 6 1 2 9

*/
