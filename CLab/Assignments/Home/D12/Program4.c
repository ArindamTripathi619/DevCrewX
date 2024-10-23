/*
QUESTION:
WAP to sort the elements of an array in descending order.

Input: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT:
Before sorting elements are: 3 6 1 8 5
After sorting elements are: 8 6 5 3 1
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Before sorting elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sorting logic (Descending Bubble Sort)
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("After sorting elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

/*
OUTPUT:
Before sorting elements are: 3 6 1 8 5
After sorting elements are: 8 6 5 3 1
*/
