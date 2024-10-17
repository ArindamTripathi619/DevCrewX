/*
3. WAP to calculate the reverse of a given number.
Input: Enter a number: 125
Output: Reverse of 125 = 521
*/
#include <stdio.h>

int main() {
    int n,rev=0,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    int n2 = n;
    while (n!=0) {
        rem = n%10;
        rev = rev*10+rem;
        n /= 10;
    }
    printf("Reverse of %d = %d\n",n2,rev);
    return 0;
}
/*
OUTPUT : 
Enter a number : 6857
Reverse of 6857 = 7586
*/