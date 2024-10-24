/*
QUESTION:
WAP to find the average mark of 5 subjects of a student and find the percentage.
Input: Enter the marks in five subjects: 160 170 165 180 185
Output: The average mark is 172.
        Percentage is 86%
*/

#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average, percentage;
    printf("Enter the marks in five subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    average = total / 5.0;
    percentage = (total / (5.0 * 200)) * 100;
    
    printf("The average mark is %.2f\n", average);
    printf("Percentage is %.2f%%\n", percentage);
    return 0;
}
/*
OUTPUT:
Enter the marks in five subjects: 160 170 165 180 185
The average mark is 172.00
Percentage is 86.00%
*/
