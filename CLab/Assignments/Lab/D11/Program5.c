/*
QUESTION:
WAP to insert an element in a 1-d array.

Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15
Enter the element to be inserted: 13
Enter the position of insertion: 3

OUTPUT:
Array elements before insertion: 3 16 11 8 15
Array elements after insertion: 3 16 13 11 8 15
*/

#include <stdio.h>

int main() {
    int n, i, element, position;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n+1]; // Increased array size for insertion
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    
    printf("Enter the position of insertion: ");
    scanf("%d", &position);
    
    printf("Array elements before insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = n; i >= position; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[position-1] = element;
    
    printf("Array elements after insertion: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Array elements before insertion: 3 16 11 8 15
Array elements after insertion: 3 16 13 11 8 15
*/
