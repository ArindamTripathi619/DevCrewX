/*
2. WAP to print all odd and even numbers separately within a given range in
descending and ascending order respectively. The range is to be inputted from the
user.
Input: Enter a range: 5 17
Output: Odd numbers within range 17 and 5: 17 15 13 11 9 7 5
Even numbers within range 5 and 17: 6 8 10 12 14 16
*/
#include <stdio.h>

int main() {
    int start,end;
    printf("Enter a range : ");
    scanf("%d%d",&start,&end);
    printf("Odd numbers within range %d and %d : ",start,end);
    for (int i = end; i >= start; i--) {
        if (i%2!=0)
            printf("%d ",i);
    }
    printf("\nEven numbers within range %d and %d : ",start,end);
    for (int i = start; i <= end; i++) {
        if (i%2==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT : 
Enter a range : 7 19
Odd numbers within range 7 and 19 : 19 17 15 13 11 9 7 
Even numbers within range 7 and 19 : 8 10 12 14 16 18
*/