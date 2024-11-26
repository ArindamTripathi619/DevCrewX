/*
QUESTION:
Write a C program to calculate the difference between two time periods (in hr-min-sec) using structures.
Input:
Enter the first time:
Hour: 2
Minute: 50
Second: 30
Enter the second time:
Hour: 4
Minute: 40
Second: 40
Output:
First Time: 2:50:30
Second Time: 4:40:40
Difference between time periods: 1:50:10
*/

#include <stdio.h>

// Define the structure for time
struct Time {
    int hour;
    int minute;
    int second;
};

// Function to calculate the difference between two times
struct Time calculateDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert times to seconds
    int time1InSeconds = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int time2InSeconds = t2.hour * 3600 + t2.minute * 60 + t2.second;

    // Find the difference in seconds
    int diffInSeconds = time2InSeconds - time1InSeconds;

    // Convert back to hours, minutes, and seconds
    diff.hour = diffInSeconds / 3600;
    diff.minute = (diffInSeconds % 3600) / 60;
    diff.second = diffInSeconds % 60;

    return diff;
}

int main() {
    struct Time t1, t2, diff;

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

    // Calculate the difference
    diff = calculateDifference(t1, t2);

    // Display the results
    printf("\nFirst Time: %d:%d:%d\n", t1.hour, t1.minute, t1.second);
    printf("Second Time: %d:%d:%d\n", t2.hour, t2.minute, t2.second);
    printf("Difference between time periods: %d:%d:%d\n", diff.hour, diff.minute, diff.second);

    return 0;
}

/*
OUTPUT:
Enter the first time:
Hour: 2
Minute: 50
Second: 30

Enter the second time:
Hour: 4
Minute: 40
Second: 40

First Time: 2:50:30
Second Time: 4:40:40
Difference between time periods: 1:50:10
*/
