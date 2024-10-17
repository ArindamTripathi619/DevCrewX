/*

*/

#include <stdio.h>

int main() {
    printf("Enter the length of the array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;
    printf("Enter the array elements : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&k);
        arr[i] = k;
    }
    printf("The array is :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
/*
OUTPUT:

*/
