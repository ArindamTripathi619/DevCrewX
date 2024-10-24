/*
QUESTION:
WAP to find the GCD/HCF and LCM of two given numbers.
Input: Enter two numbers: 20 30
Output: GCD of 20 and 30 is 10.
        LCM of 20 and 30 is 60.
*/

#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = find_gcd(num1, num2);
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is %d.\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}

/*
OUTPUT:
Enter two numbers: 20 30
GCD of 20 and 30 is 10.
LCM of 20 and 30 is 60.
*/
