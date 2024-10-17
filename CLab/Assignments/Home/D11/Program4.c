/*
WAP to multiply the content of two arrays and store the result in a third
 array. Display the elements of the resultant array.
 Input: Enter the array size: 5
 Enter 5 elements of the first array: 3 6 1 8 5
 Enter 5 elements of the second array: 2 3 1 4 5
 Output: Elements of the resultant array after multiplication: 6 18 1 32 25
*/

#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size], result[size];
    printf("Enter %d elements of the first array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements of the second array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
    printf("Elements of the resultant array after multiplication: ");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements of the first array: 6 7 3 4 2
Enter 5 elements of the second array: 1 9 6 0 5
Elements of the resultant array after multiplication: 6 63 18 0 10 

*/
