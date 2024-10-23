/*
QUESTION:
Given an integer array, find the peak element(s). A peak element is an element that is greater than its neighbors.

Input: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7

OUTPUT:
Peak Elements are: 16 15 51
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Peak Elements are: ");
    if(arr[0] > arr[1]) {
        printf("%d ", arr[0]);
    }
    for(i = 1; i < n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d ", arr[i]);
        }
    }
    if(arr[n-1] > arr[n-2]) {
        printf("%d ", arr[n-1]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Peak Elements are: 16 15 51
*/
