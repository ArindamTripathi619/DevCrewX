/*
QUESTION:
WAP to find largest element stored in an array.

Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15

OUTPUT:
Largest element of the array: 16
*/

#include <stdio.h>

int main() {
    int n, i, largest;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    printf("Largest element of the array: %d\n", largest);
    
    return 0;
}

/*
OUTPUT:
Largest element of the array: 16
*/
