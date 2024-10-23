/*
QUESTION:
WAP to delete an element from a desired position from an array.

Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15
Enter the position of the element to be deleted: 4

OUTPUT:
Array elements before deletion: 3 16 11 8 15
Array elements after deletion: 3 16 11 15
*/

#include <stdio.h>

int main() {
    int n, i, position;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    
    printf("Array elements before deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = position-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    
    printf("Array elements after deletion: ");
    for(i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Array elements before deletion: 3 16 11 8 15
Array elements after deletion: 3 16 11 15
*/
