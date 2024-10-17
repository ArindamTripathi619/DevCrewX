/*
WAP Given an array A of n elements. Find the majority element in the
 array. A majority element in an array A of size n is an element that appears
 more than n/2 times in the array.
 Input: Enter the array size: 10
 Enter 10 elements: 3 6 3 3 5 4 3 3 1 3
Output: Majority Element: 3
*/

#include <stdio.h>

int main() {
    int n;

    // Input: Size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);

    int A[n];

    // Input: Elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Step 1: Find a candidate for majority element
    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = A[i];
            count = 1;
        } else if (A[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is a majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == candidate) {
            count++;
        }
    }

    // Output: Print the majority element or say there is none
    if (count > n / 2) {
        printf("Majority Element: %d\n", candidate);
    } else {
        printf("No Majority Element found\n");
    }

    return 0;
}

/*
OUTPUT:
Enter the array size: 5
Enter 5 elements:  6 9 6 4 6
Majority Element: 6
*/
