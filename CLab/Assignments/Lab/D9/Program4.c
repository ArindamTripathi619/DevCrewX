/*
QUESTION:
WAP to find the prime factors of a number entered through the keyboard. The user has to input a number, and the program outputs its prime factors.
*/

#include <stdio.h>

int main() {
    int num, i;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The prime factors of %d are: ", num);
    
    // Find and display the prime factors
    for (i = 2; num > 1; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    
    printf("\n");
    return 0;
}

/*
OUTPUT:
Enter a number: 100
The prime factors of 100 are: 2 2 5 5
*/
