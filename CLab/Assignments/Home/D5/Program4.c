#include <stdio.h>
int main() {
    int a,b,ch;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your ch : ");
    scanf("%d",&ch);
    if(ch==1) {
        printf("Result = %d",a+b);
    } else if(ch==2) {
        printf("Result = %d",a-b);
    } else if(ch==3) {
        printf("Result = %d",a*b);
    } else {
        printf("Result = %d",a/b);
    }
    return 0;
}