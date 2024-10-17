/*
1. WAP to find the average of n numbers using arrays. Input: Enter the array size: 5
Enter 5 elements: 3 16 11 8 15
Output: Average of the array: 10.6
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("Average of the array: %.1f\n", average);
    return 0;
}
/*
OUTPUT:
Enter the array size: 5
Enter 5 elements: 2 5 6 8 9
Average of the array: 6.0

*/
