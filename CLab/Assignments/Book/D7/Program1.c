#include <stdio.h>

int main() {
    int a,c=0;
    printf("Enter the age of 10 persons : ");
    for (size_t i = 0; i < 10; i++) {
        scanf("%d",&a);
        if(a>=40&&a<=50)
            c++;
    }
    printf("Number of persons in the age group 40 to 50 = %d\n",c);
    
    return 0;
}