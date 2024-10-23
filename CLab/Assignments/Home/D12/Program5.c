/*
QUESTION:
WAP to print the leader elements of an array. An element of an array is a leader if it is greater than or equal to all the elements present after it.

Input: Enter the array size: 10
Enter 10 elements: 3 16 51 8 15 4 12 34 25 7

OUTPUT:
Leader Elements: 51 34 25
*/

#include <stdio.h>

int main() {
    int n, i, max;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Leader Elements: ");
    max = arr[n-1];
    printf("%d ", max);
    
    for(i = n-2; i >= 0; i--) {
        if(arr[i] >= max) {
            max = arr[i];
            printf("%d ", max);
        }
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Leader Elements: 51 34 25
*/
