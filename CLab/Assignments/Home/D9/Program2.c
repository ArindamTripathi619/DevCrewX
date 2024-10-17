/*
WAP to check whether an input integer is strong number or not.
Hint: If the sum of factorials of all digits of a number are equal to the number are
equal to the number, it is called a strong number.
Input 1: Enter a Number: 145
Output 1: 145 is a strong number.
Input 2: Enter a Number: 45
Output 2: 45 is not a strong number.
*/

#include <stdio.h>

int main() {
    printf("Enter a Number: ");
    int num, temp, sum = 0, factorial;
    scanf("%d", &num);
    temp = num;
    while (temp!= 0) {
        factorial = 1;
        int digit = temp % 10;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    
    return 0;
}
/*
OUTPUT:

*/
