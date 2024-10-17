/*
WAP to test whether a number is Perfect Number or not. (A number is
said to be Perfect when the sum of factors excluding the number itself is
equal to the original number.)
Input 1: Enter a number: 28
Output 1: 28 is a Perfect Number
Input 2: Enter a number: 7
Output 2: 7 is not a Perfect Number
*/
#include <stdio.h>

int main() {
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);
    int s=0;
    for(int i=1; i<num; i++) {
        if(num % i == 0) {
            s += i;
        }
    }
    if(s==num) {
        printf("%d is a perfect number.\n", num);
    }
    else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
/*
OUTPUT :
Enter a number : 28
28 is a perfect number.
*/