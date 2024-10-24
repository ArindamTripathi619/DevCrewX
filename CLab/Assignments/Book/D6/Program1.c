/*
QUESTION:
WAP to find the number and sum of all integers greater than 100 and less than 200 that are divisible by 7.

Output: Number of all integers greater than 100 and less than 200 that are divisible by 7 = 14.
        Sum of all integers greater than 100 and less than 200 that are divisible by 7 = 2107.
*/

#include <stdio.h>

int main() {
    int count = 0, sum = 0;

    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;
            sum += i;
        }
    }

    printf("Number of all integers greater than 100 and less than 200 that are divisible by 7 = %d\n", count);
    printf("Sum of all integers greater than 100 and less than 200 that are divisible by 7 = %d\n", sum);

    return 0;
}
/*
OUTPUT:
Number of all integers greater than 100 and less than 200 that are divisible by 7 = 14.
Sum of all integers greater than 100 and less than 200 that are divisible by 7 = 2107.
*/
