/*
QUESTION:
WAP to find out the sum of n numbers stored in an array of integers.

Input: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT:
Sum of the elements of the array: 23
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("Sum of the elements of the array: %d\n", sum);
    
    return 0;
}

/*
OUTPUT:
Sum of the elements of the array: 23
*/
