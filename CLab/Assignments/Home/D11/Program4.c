/*
QUESTION:
WAP to multiply the content of two arrays and store the result in a third array. Display the elements of the resultant array.

Input: Enter the array size: 5
Enter 5 elements of the first array: 3 6 1 8 5
Enter 5 elements of the second array: 2 3 1 4 5

OUTPUT:
Elements of the resultant array after multiplication: 6 18 1 32 25
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], result[n];
    printf("Enter %d elements of the first array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter %d elements of the second array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for(i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }
    
    printf("Elements of the resultant array after multiplication: ");
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Elements of the resultant array after multiplication: 6 18 1 32 25
*/
