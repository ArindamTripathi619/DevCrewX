/*
QUESTION:
WAP to find the median of a list of numbers stored in an array.

Input 1: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7

OUTPUT 1:
Median of the given array: 11.5

Input 2: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT 2:
Median of the given array: 5
*/

#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, n);
    
    if(n % 2 == 0) {
        printf("Median of the given array: %.1f\n", (arr[n/2 - 1] + arr[n/2]) / 2.0);
    } else {
        printf("Median of the given array: %d\n", arr[n/2]);
    }
    
    return 0;
}

/*
OUTPUT 1:
Median of the given array: 11.5

OUTPUT 2:
Median of the given array: 5
*/
