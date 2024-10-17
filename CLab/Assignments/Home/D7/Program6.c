/*
6. WAP to find x to the power of y where x and y will be inputted from the keyboard.
Input: Enter the value of x and y: 2 5
Output: 2 to the power 5 = 32
*/
#include <stdio.h>

int main() {
    int x,y,t=1;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    for(int i=0;i<y;i++)
        t *= x;
    printf("%d to the power %d = %d\n",x,y,t);
    return 0;
}
/*
OUTPUT : 
Enter the value of x and y : 2 5
2 to the power 5 = 32 
*/