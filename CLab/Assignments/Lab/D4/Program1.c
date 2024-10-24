/*
QUESTION:
WAP to convert given time duration in seconds into its equivalent hour, minute, and second.

Input: Enter the time duration in seconds: 8860 seconds
Output: Entered time duration: 2 Hours, 27 Minutes, and 40 Seconds
*/

#include <stdio.h>

int main() {
    int seconds, hours, minutes;
    
    printf("Enter the time duration in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    printf("Entered time duration: %d Hours, %d Minutes, and %d Seconds\n", hours, minutes, seconds);

    return 0;
}
/*
OUTPUT:
Entered time duration: 2 Hours, 27 Minutes, and 40 Seconds
*/
