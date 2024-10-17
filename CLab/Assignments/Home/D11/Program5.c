/*
WAPtofind out the largest even integer stored in an array of n integers
 where n is inputted from the user.
 Input: Enter the array size: 10
 Enter 10 elements: 3 16 11 8 15 4 12 34 51 7
 Output: Largest even number of the array: 34
*/

#include <stdio.h>

int main() {
    int size, i, largestEven = 0;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }
    printf("Largest even number of the array: %d\n", largestEven);
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 6 9 3 40 7
Largest even number of the array: 40
*/
