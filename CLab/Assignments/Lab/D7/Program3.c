/*
QUESTION:
WAP to read 10 integers as input. Print their sum and average.
Input: Enter 10 integers: 54 32 56 76 87 90 23 12 44 55
Output: The sum is 529. The average is 52.900002
*/

#include <stdio.h>

int main() {
    int numbers[10], sum = 0;
    float average;
    
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 10.0;
    printf("The sum is %d. The average is %.6f\n", sum, average);

    return 0;
}

/*
OUTPUT:
Enter 10 integers: 54 32 56 76 87 90 23 12 44 55
The sum is 529. The average is 52.900002
*/
