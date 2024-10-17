#include <stdio.h>
int main() {
    int p,c,m;
    printf("Enter the marks obtained in Physics, Chemistry and Mathematics : ");
    scanf("%d%d%d",&p,&c,&m);
    if(m>=65&&p>=55&&c>=50&&p+c+m>=190||p+m>=140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }
    return 0;
}