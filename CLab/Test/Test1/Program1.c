#include <stdio.h>

int main() {
    printf("Enter your salary : ");
    int salary;
    scanf("%d", &salary);
    float tax;
    if(tax>1000000) {
        tax = 0.30f * salary;
    }
    else if(salary>=500000&&salary<1000000) {
        tax = 0.20f * salary;
    }
    else if(salary>=250000&&salary<500000) {
        tax = 0.05f * salary;
    }
    else {
        tax = 0.00;
    }
    printf("Total tax: %.2f\n", tax);
    return 0;
}