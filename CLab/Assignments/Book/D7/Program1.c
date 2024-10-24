/*
QUESTION:
WAP to read the age of 10 persons and count the number of persons in the age group 50 to 40. Use for statements.
Input: Enter the age of 10 persons: 30 45 56 51 39 18 54 33 45 50
Output: Number of persons in the age group 50 to 40 = 4
*/

#include <stdio.h>

int main() {
    int ages[10], count = 0;

    printf("Enter the age of 10 persons: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] >= 40 && ages[i] <= 50) {
            count++;
        }
    }

    printf("Number of persons in the age group 50 to 40 = %d\n", count);
    return 0;
}

/*
OUTPUT:
Enter the age of 10 persons: 30 45 56 51 39 18 54 33 45 50
Number of persons in the age group 50 to 40 = 4
*/
