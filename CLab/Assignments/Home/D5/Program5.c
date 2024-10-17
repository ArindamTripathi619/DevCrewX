#include <stdio.h>
int main() {
    int n;
    printf("Enter the month number : ");
    scanf("%d",&n);
    if(n==2) {
        printf("Month has 28 days.\n");
    } else if(n==1||n==3||n==5||n==7||n==8||n==10||n==12) {
        printf("Month has 31 days.\n");
    } else {
        printf("Month has 30 days.");
    }
    return 0;
}