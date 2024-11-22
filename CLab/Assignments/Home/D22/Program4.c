/*
QUESTION:
Write a C program to merge two sorted arrays into a dynamically allocated array with unique elements.
Input: Enter the first array size: 4
       Enter the elements of the array: 10 23 41 50
       Enter the second array size: 5
       Enter the elements of the array: 12 23 46 55
Output: After merging the resultant array: 10 12 23 41 46 50 55
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, *arr1, *arr2, *result, resultSize = 0;

    // Input the sizes of the arrays
    printf("Enter the first array size: ");
    scanf("%d", &n1);
    arr1 = (int *)malloc(n1 * sizeof(int));

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the second array size: ");
    scanf("%d", &n2);
    arr2 = (int *)malloc(n2 * sizeof(int));

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Allocate memory for the merged array
    result = (int *)malloc((n1 + n2) * sizeof(int));

    // Merge arrays and remove duplicates
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            result[k++] = arr2[j++];
        } else { // Avoid duplicates
            result[k++] = arr1[i];
            i++;
            j++;
        }
    }

    while (i < n1) {
        result[k++] = arr1[i++];
    }
    while (j < n2) {
        result[k++] = arr2[j++];
    }

    resultSize = k;

    // Output the merged array
    printf("After merging the resultant array: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}

/*
OUTPUT:
Enter the first array size: 4
Enter the elements of the first array: 10 23 41 50
Enter the second array size: 5
Enter the elements of the second array: 12 23 46 55
After merging the resultant array: 10 12 23 41 46 50 55
*/
