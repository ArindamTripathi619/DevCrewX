/*
QUESTION:
Write a C program to add two distances (in km and meter) using structures.
Input:
Enter data for first distance:
Enter km: 6
Enter meter: 600
Enter data for second distance:
Enter km: 7
Enter meter: 500
Output:
Sum of the distances = 14 km 100 m
*/

#include <stdio.h>

// Define the structure
struct Distance {
    int km;
    int meter;
};

int main() {
    struct Distance d1, d2, sum;

    // Input distances
    printf("Enter data for first distance:\n");
    printf("Enter km: ");
    scanf("%d", &d1.km);
    printf("Enter meter: ");
    scanf("%d", &d1.meter);

    printf("Enter data for second distance:\n");
    printf("Enter km: ");
    scanf("%d", &d2.km);
    printf("Enter meter: ");
    scanf("%d", &d2.meter);

    // Add distances
    sum.km = d1.km + d2.km;
    sum.meter = d1.meter + d2.meter;
    if (sum.meter >= 1000) {
        sum.km += sum.meter / 1000;
        sum.meter %= 1000;
    }

    // Output the result
    printf("\nSum of the distances = %d km %d m\n", sum.km, sum.meter);

    return 0;
}

/*
OUTPUT:
Enter data for first distance:
Enter km: 6
Enter meter: 600
Enter data for second distance:
Enter km: 7
Enter meter: 500

Sum of the distances = 14 km 100 m
*/
