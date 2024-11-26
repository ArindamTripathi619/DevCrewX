/*
QUESTION:
Write a C program to add two times (hr-min-sec) by passing structures to a function.
Input:
Enter the first time:
Hour: 2
Minute: 50
Second: 30
Enter the second time:
Hour: 3
Minute: 40
Second: 40
Output:
First Time: 2:50:30
Second Time: 3:40:40
Sum: 6:31:10
*/

#include <stdio.h>

// Define the structure for time
struct Time {
    int hour;
    int minute;
    int second;
};

// Function to add two times
struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    result.second = t1.second + t2.second;
    result.minute = t1.minute + t2.minute + result.second / 60;
    result.second %= 60;

    result.hour = t1.hour + t2.hour + result.minute / 60;
    result.minute %= 60;

    return result;
}

int main() {
    struct Time t1, t2, sum;

    // Input the first time
    printf("Enter the first time:\n");
    printf("Hour: ");
    scanf("%d", &t1.hour);
    printf("Minute: ");
    scanf("%d", &t1.minute);
    printf("Second: ");
    scanf("%d", &t1.second);

    // Input the second time
    printf("\nEnter the second time:\n");
    printf("Hour: ");
    scanf("%d", &t2.hour);
    printf("Minute: ");
    scanf("%d", &t2.minute);
    printf("Second: ");
    scanf("%d", &t2.second);

    // Calculate the sum
    sum = addTime(t1, t2);

    // Display the result
    printf("\nFirst Time: %d:%d:%d\n", t1.hour, t1.minute, t1.second);
    printf("Second Time: %d:%d:%d\n", t2.hour, t2.minute, t2.second);
    printf("Sum: %d:%d:%d\n", sum.hour, sum.minute, sum.second);

    return 0;
}

/*
OUTPUT:
Enter the first time:
Hour: 2
Minute: 50
Second: 30
Enter the second time:
Hour: 3
Minute: 40
Second: 40

First Time: 2:50:30
Second Time: 3:40:40
Sum: 6:31:10
*/
