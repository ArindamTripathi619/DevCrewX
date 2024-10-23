/*
QUESTION:
WAP to find the average of n numbers using arrays.

Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15

OUTPUT:
Average of the array: 10.6
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Average of the array: %.1f\n", sum/n);
    
    return 0;
}

/*
OUTPUT:
Average of the array: 10.6
*/
