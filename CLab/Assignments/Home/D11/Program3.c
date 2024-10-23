/*
QUESTION:
WAP to print all the even and odd numbers of a 1-d array separately.

Input: Enter the array size: 10
Enter 10 elements: 3 16 11 8 15 4 12 34 51 76

OUTPUT:
Even Numbers: 16 8 4 12 34 76
Odd Numbers: 3 11 15 51
*/

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Even Numbers: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    printf("Odd Numbers: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Even Numbers: 16 8 4 12 34 76
Odd Numbers: 3 11 15 51
*/
