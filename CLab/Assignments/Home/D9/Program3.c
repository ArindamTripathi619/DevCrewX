/*
QUESTION:
WAP to print numbers between 10 to 1000 where the digits of the numbers are equal.
*/

#include <stdio.h>

int main() {
    printf("Numbers with equal digits between 10 to 1000:\n");
    
    for (int i = 10; i <= 1000; i++) {
        int num = i, first_digit = num % 10;
        int all_equal = 1;
        
        while (num > 0) {
            if (num % 10 != first_digit) {
                all_equal = 0;
                break;
            }
            num /= 10;
        }
        
        if (all_equal) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

/*
OUTPUT:
Numbers with equal digits between 10 to 1000:
11 22 33 44 55 66 77 88 99 111 222 333 444 555 666 777 888 999
*/
