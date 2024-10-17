/*
WAP to print all the even and odd numbers of an 1-d array separately.
Input: Enter the array size: 10
 Enter 10 elements: 3 16 11 8 15 4 12 34 51 76
 Output: Even Numbers: 16 8 4 12 34 76
 Odd Numbers: 3 11 15 51
*/

#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Even Numbers: ");
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd Numbers: ");
    for (i = 0; i < size; i++) {
        if (arr[i] % 2!= 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 5 9 4 6 2
Even Numbers: 4 6 2 
Odd Numbers: 5 9
*/
