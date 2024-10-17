/*
WAP to find the number and sum of all integers greater than 100 and less than
200 that are divisible by 7 [Page No: 167, Exercise 6.2]
Output: Number of all integers greater than 100 and less than 200 that are
divisible by 7 = 14

Sum of all integers greater than 100 and less than 200 that are divisible

by 7 = 2107
*/
#include <stdio.h>

int main() {
    int n=0,s=0;
    for (int i = 101; i < 200; i++) {
        if(i%7==0) {
            s+=i;
            n++;
        }
    }
    printf("Number of all integers greater than 100 and less than 200 that are divisible by 7 = %d\n",n);
    printf("Sum of all integers greater than 100 and less than 200 that are divisible by 7 = %d\n",s);
    return 0;
}
/*
Number of all integers greater than 100 and less than 200 that are divisible by 7 = 14
Sum of all integers greater than 100 and less than 200 that are divisible by 7 = 2107
*/