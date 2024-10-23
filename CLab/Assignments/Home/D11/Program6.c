/*
QUESTION:
WAP to swap the pair of elements starting from the beginning.

Input 1: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7

OUTPUT 1:
Before swapping elements are: 3 16 11 8 15 4 12 34 51 7
After swapping elements are: 16 3 8 11 4 15 34 12 7 51

Input 2: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT 2:
Before swapping elements are: 3 6 1 8 5
After swapping elements are: 6 3 8 1 5
*/

#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Before swapping elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = 0; i < n-1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
    printf("After swapping elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT 1:
Before swapping elements are: 3 16 11 8 15 4 12 34 51 7
After swapping elements are: 16 3 8 11 4 15 34 12 7 51

OUTPUT 2:
Before swapping elements are: 3 6 1 8 5
After swapping elements are: 6 3 8 1 5
*/
