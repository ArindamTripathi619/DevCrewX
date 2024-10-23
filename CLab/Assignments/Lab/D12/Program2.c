/*
QUESTION:
Given an array of non-negative integers and an integer sum, find a sub-array that adds to a given sum.

Input: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7
Enter the sum: 39

OUTPUT:
Sub array which adds to 39: [8 15 4 12]
*/

#include <stdio.h>

int main() {
    int n, sum, i, j, currentSum;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the sum: ");
    scanf("%d", &sum);
    
    // Subarray logic
    for(i = 0; i < n; i++) {
        currentSum = arr[i];
        for(j = i+1; j <= n; j++) {
            if(currentSum == sum) {
                printf("Sub array which adds to %d: [", sum);
                for(int k = i; k < j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("]\n");
                return 0;
            }
            if(currentSum > sum || j == n)
                break;
            currentSum = currentSum + arr[j];
        }
    }
    printf("No sub-array found\n");
    return 0;
}

/*
OUTPUT:
Sub array which adds to 39: [8 15 4 12]
*/
