/*
WAP to print the prime numbers within a given range.
Input : Enter a range: 1 20
Output: Prime numbers within range 1 and 20 are: 2 3 5 7 11 13 17 19
*/
#include <stdio.h>

int main() {
    int start,end;
    printf("Enter a range: ");
    scanf("%d %d", &start, &end);
    int c = 0;
    printf("Prime numbers within range %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        if(i==1)
            continue;
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0)
                c++;
        }
        if(c==0)
            printf("%d ",i);
        c = 0;
        
    }
    printf("\n");

    return 0;
}
/*
OUTPUT :
Enter a range: 6 30
Prime numbers within range 6 and 30 are: 7 11 13 17 19 23 29
*/