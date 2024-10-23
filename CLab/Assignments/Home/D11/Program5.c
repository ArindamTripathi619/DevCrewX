/*
QUESTION:
WAP to find out the largest even integer stored in an array of n integers where n is inputted from the user.

Input: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 7

OUTPUT:
Largest even number of the array: 34
*/

#include <stdio.h>

int main() {
    int n, i, largestEven = -1;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }
    
    if(largestEven != -1) {
        printf("Largest even number of the array: %d\n", largestEven);
    } else {
        printf("No even number found.\n");
    }
    
    return 0;
}

/*
OUTPUT:
Largest even number of the array: 34
*/
