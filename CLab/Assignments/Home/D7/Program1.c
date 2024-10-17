/*
1. WAP to input any integer and print your name that many times.
Input: Enter an integer: 5
Output: Jasaswi
        Jasaswi
        Jasaswi
        Jasaswi
        Jasaswi
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Jasaswi \n");
    }
    
    return 0;
}
/*
OUTPUT : 
Enter an integer : 7
Jasaswi 
Jasaswi 
Jasaswi 
Jasaswi 
Jasaswi 
Jasaswi 
Jasaswi
*/