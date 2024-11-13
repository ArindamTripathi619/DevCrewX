/*
QUESTION:
WAP to merge the contents of two sorted arrays and store them into a third sorted array.

Input: Enter the first array size: 5
Enter 5 elements of the first array: 3 6 11 18 25
Enter the second array size: 3
Enter 3 elements of the second array: 13 36 50

OUTPUT:
First Array: 3 6 11 18 25
Second Array: 13 36 50
Merged Array: 3 6 11 13 18 25 36 50
*/

#include <stdio.h>

int main() {
    int n1, n2, i, j, k;
    
    printf("Enter the first array size: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of the first array: ", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the second array size: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of the second array: ", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1+n2];
    i = j = k = 0;
    
    // Merging logic
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        merged[k++] = arr1[i++];
    }
    while(j < n2) {
        merged[k++] = arr2[j++];
    }
    
    printf("First Array: ");
    for(i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for(i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\nMerged Array: ");
    for(i = 0; i < n1+n2; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}

/*
OUTPUT:
First Array: 3 6 11 18 25
Second Array: 13 36 50
Merged Array: 3 6 11 13 18 25 36 50
*/
