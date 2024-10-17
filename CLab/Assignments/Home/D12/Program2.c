/*
WAP Given an array A of n elements. Find the majority element in the
 array. A majority element in an array A of size n is an element that appears
 more than n/2 times in the array.
 Input: Enter the array size: 10
 Enter 10 elements: 3 6 3 3 5 4 3 3 1 3
Output: Majority Element: 3
*/

#include <stdio.h>

int main() {
    int size, i, count = 0, majority;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    majority = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] == majority) {
            count++;
        } else {
            count--;
            if (count == 0) {
                majority = arr[i];
                count = 1;
            }
        }
    }
    printf("Majority Element: %d\n", majority);
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements:  6 9 6 4 6
Majority Element: 6
*/
