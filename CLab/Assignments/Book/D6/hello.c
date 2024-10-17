#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a number : ");
    int n;
    scanf("%d", &n);
    int temp = n;
    int temp2 = temp;
    int c = 0;
    
    while (n != 0) {
        n /= 10;
        c++;
    }

    int s = 0;
    for (int i = 0; i < c; i++) {
        s += pow(temp % 10, c);
        temp /= 10;
    }

    printf("%d\n", s);
    if (s == temp2) {
        printf("%d is an Armstrong number.\n", temp2);
    } else {
        printf("%d is not an Armstrong number.\n", temp2);
    }

    return 0;
}