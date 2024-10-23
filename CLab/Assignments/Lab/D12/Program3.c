/*
QUESTION:
WAP to find out the second largest element stored in an array of integers.

Input: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7

OUTPUT:
Second Largest Element: 34
*/

#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = secondLargest = arr[0];
    
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("Second Largest Element: %d\n", secondLargest);
    
    return 0;
}

/*
OUTPUT:
Second Largest Element: 34
*/
