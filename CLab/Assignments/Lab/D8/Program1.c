/*
QUESTION:
WAP to find out x^n/n! where the value of x and n will be inputted from the keyboard.
Input: Enter the value of x and n: 2 5
Output: 2 to the power 5 divided by 5! = 0.2666
*/

#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x, n;
    double result;
    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);

    result = (double)pow(x, n) / factorial(n);

    printf("%d to the power %d divided by %d! = %.4f\n", x, n, n, result);
    return 0;
}

/*
OUTPUT:
Enter the value of x and n: 2 5
2 to the power 5 divided by 5! = 0.2666
*/
