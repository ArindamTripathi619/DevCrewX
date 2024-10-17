/*
Given an integer array, find the peak element in it. A peak element is an
 element that is greater than its neighbors. There might be multiple peak
 elements in an array, and the solution should report all peak elements.
 Input: Enter the array size: 10
 Enter 10 elements: 3 16 11 8 15 4 12 34 51 7
 Output: Peak Elements are: 16 15 51
*/

#include <stdio.h>

int main() {
    int size, i, peak;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Peak Elements are: ");
    for (i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 10
Enter 10 elements: 4 7 3 9 6 0 1 8 5 2
Peak Elements are: 7 9 8
*/
