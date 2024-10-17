/*
The present value (popularly known as book value) of an item is given by the
relationship:

P = c(1 − d)^n

where c: original cost
d: rate of depreciation (per year)
n: number of years
P: present value after n years
If P is considered the scrap value at the end of useful life of the item, write a
program to compute the useful life in years given the original cost, depreciation rate
and the scrap value. The program should request the user to input the data
interactively.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double c,d,p,n;
    char flag = 'Y';

    while (flag == 'Y'||flag == 'y') {
        printf("Enter the original cost of the item : ");
        scanf("%lf",&c);

        printf("Enter the rate of depreciation (per year) : ");
        scanf("%lf",&d);
        d/=100.0;

        printf("Enter the scrap value of the item : ");
        scanf("%lf",&p);

        n = log(p/c)/log(1-d);
        printf("Useful life of the item = %.2lf years\n",n);

        printf("Do you want to continue [Y for Yes and N for No]: ");
        scanf(" %c",&flag); //this line
    }
    
    return 0;
}

/*
OUTPUT :
Enter the original cost of the item : 50000
Enter the rate of depreciation (per year) : 5
Enter the scrap value of the item : 15000
Useful life of the item = 23.47 years
Do you want to continue [Y for Yes and N for No]: n
*/