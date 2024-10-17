/*
WAP to print the prime factors of a number entered through the keyboard.
*/

#include <stdio.h>

int main() {
    printf("Enter the number :");
    int num, i;
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    for (i = 2; i <= num; i++) {
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

*/
