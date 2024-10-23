/*
QUESTION:
Given an array of integers of size n and an integer d, the task is to rotate the array elements to the left by d positions.

Input: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5
Enter the value of d: 2

OUTPUT:
Array before rotation: 3 6 1 8 5
Array after rotation by 2 positions: 1 8 5 3 6
*/

#include <stdio.h>

void leftRotate(int arr[], int d, int n) {
    int i, j, temp;
    for(i = 0; i < d; i++) {
        temp = arr[0];
        for(j = 0; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
}

int main() {
    int n, d, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of d: ");
    scanf("%d", &d);
    
    printf("Array before rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    leftRotate(arr, d, n);
    
    printf("Array after rotation by %d positions: ", d);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Array before rotation: 3 6 1 8 5
Array after rotation by 2 positions: 1 8 5 3 6
*/
