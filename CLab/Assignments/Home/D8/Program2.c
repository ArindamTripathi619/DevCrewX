/*
QUESTION:
WAP to print the prime numbers within a given range.
Input: Enter a range: 1 20
Output: Prime numbers within range 1 and 20 are: 2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;
    printf("Enter a range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers within range %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i))
            printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter a range: 1 20
Prime numbers within range 1 and 20 are: 2 3 5 7 11 13 17 19
*/
