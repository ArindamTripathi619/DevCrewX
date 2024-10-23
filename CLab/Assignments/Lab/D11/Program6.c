/*
QUESTION:
WAP to reverse the array elements by swapping first element with last, second element with second last, and so on.

Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15

OUTPUT:
Array elements: 3 16 11 8 15
Reverse of the array: 15 8 11 16 3
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
    
    printf("Array elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    printf("Reverse of the array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Array elements: 3 16 11 8 15
Reverse of the array: 15 8 11 16 3
*/
