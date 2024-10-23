/*
QUESTION:
WAP to search an element in a 1-d array.

Input 1: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15
Enter the element to search: 8

OUTPUT 1:
Element 8 found at position 4

Input 2: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15
Enter the element to search: 13

OUTPUT 2:
Element 13 not found in the array.
*/

#include <stdio.h>

int main() {
    int n, i, element, found = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &element);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("Element %d found at position %d\n", element, i+1);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element %d not found in the array.\n", element);
    }
    
    return 0;
}

/*
OUTPUT 1:
Element 8 found at position 4

OUTPUT 2:
Element 13 not found in the array.
*/
