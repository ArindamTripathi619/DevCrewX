/*
QUESTION:
WAP to remove the duplicate elements present in the array.

Input: Enter the array size: 10
Enter 10 elements: 3 6 7 3 5 4 8 3 1 7

OUTPUT:
Initial Array: 3 6 7 3 5 4 8 3 1 7
Array after removing duplicate elements: 3 6 7 5 4 8 1
*/

#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Initial Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Removing duplicates
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(k = j; k < n-1; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Array after removing duplicate elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Initial Array: 3 6 7 3 5 4 8 3 1 7
Array after removing duplicate elements: 3 6 7 5 4 8 1
*/
