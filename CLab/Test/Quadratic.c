#include <stdio.h>
#include <math.h>

int main() {
    float a=1,b=4,c=4;
    float D;
    float x1,x2;
    D = (b*b-4*a*c);
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);
    printf("%.2f\n",x1);
    printf("%.2f\n",x2);

    return 0;
}