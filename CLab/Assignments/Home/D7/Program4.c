/*
4. WAP to check a number is palindrome or not
Input 1: Enter a number: 121
Output 1: 121 is a palindrome number
Input 2: Enter a number: 427
Output 2: 427 is not a palindrome number
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
    if(rev==n2)
        printf("%d is a palindrome number\n",n2);
    else
        printf("%d is not a palindrome number\n",n2);
    return 0;
}
/*
OUTPUT : 
Enter a number : 27572
27572 is a palindrome number
*/