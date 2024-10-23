/*
QUESTION:
WAP to create an array that can store n integers and display the contents of the array.

Input: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT:
Elements of the array are: 3 6 1 8 5
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
    
    printf("Elements of the array are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

/*
OUTPUT:
Elements of the array are: 3 6 1 8 5
*/
