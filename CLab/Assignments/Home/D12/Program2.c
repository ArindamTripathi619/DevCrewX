/*
QUESTION:
WAP Given an array A of n elements. Find the majority element in the array (element that appears more than n/2 times).

Input: Enter the array size: 10
Enter 10 elements: 3 6 3 3 5 4 3 3 1 3

OUTPUT:
Majority Element: 3
*/

#include <stdio.h>

int main() {
    int n, i, count = 0, candidate;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Moore's Voting Algorithm
    candidate = arr[0];
    count = 1;
    for(i = 1; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    
    // Verify if candidate is the majority element
    count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }
    
    if(count > n/2) {
        printf("Majority Element: %d\n", candidate);
    } else {
        printf("No Majority Element found\n");
    }
    
    return 0;
}

/*
OUTPUT:
Majority Element: 3
*/
