/*
QUESTION:
WAP to print all even numbers within a given range. The range is given by the user.
Input 1: Enter two numbers: 3 20
Output 1: Even numbers within range 3 and 20 are: 4 6 8 10 12 14 16 18 20
Input 2: Enter two numbers: 10 2
Output 2: Even numbers within range 10 and 2 are: 10 8 6 4 2
*/

#include <stdio.h>

int main() {
    int start, end;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers within range %d and %d are: ", start, end);
    if (start > end) {
        for (int i = start; i >= end; i--) {
            if (i % 2 == 0) printf("%d ", i);
        }
    } else {
        for (int i = start; i <= end; i++) {
            if (i % 2 == 0) printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

/*
OUTPUT:
Enter two numbers: 3 20
Even numbers within range 3 and 20 are: 4 6 8 10 12 14 16 18 20

Enter two numbers: 10 2
Even numbers within range 10 and 2 are: 10 8 6 4 2
*/
