/*
WAP to print numbers between 10 to 1000 where the digits of the numbers are//-
equal. (e.g. 22, 33, 111, 555 or 999)
Output: 11 22 33 44 . . . 111 222 ...999
*/
#include <stdio.h>

int main() {
    int i;
    printf("Numbers between 10 and 1000 where the digits are equal:\n");
    for (i = 11; i <= 999; i++) {
        int digit1 = i / 100;
        int digit2 = (i % 100) / 10;
        int digit3 = i % 10;
        if (digit1 == digit2 && digit2 == digit3) {
            printf("%d ", i);
        }
    }
    return 0;
}
