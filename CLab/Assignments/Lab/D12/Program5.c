/*
QUESTION:
WAP to find the standard deviation of a list of numbers.

Input: Enter the array size: 5
Enter 5 elements: 3 6 1 8 5

OUTPUT:
Standard Deviation: 2.4166091947189
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, mean, variance = 0.0, stddev;
    
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    mean = sum / n;
    
    for(i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    
    variance = variance / n;
    stddev = sqrt(variance);
    
    printf("Standard Deviation: %f\n", stddev);
    
    return 0;
}

/*
OUTPUT:
Standard Deviation: 2.4166091947189
*/
