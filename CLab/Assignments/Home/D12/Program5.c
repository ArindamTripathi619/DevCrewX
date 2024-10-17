/*
WAPtoprint the leader elements of an array. An element of an array is a
 leader if it is greater than or equal to all the elements present after it.
 Input: Enter the array size: 10
 Enter 10 elements: 3 16 51 8 15 4 12 34 25 7
 Output: Leader Elements: 51 34 25
*/

#include <stdio.h>

int main() {
    int size, i, leader;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Leader Elements: ");
    leader = arr[size - 1];
    for (i = size - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            printf("%d ", arr[i]);
            leader = arr[i];
        }
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 294 67 2 0 45 
Leader Elements: 67 294 
*/
