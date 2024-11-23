/*

*/

#include <stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main() {
    int a = 2;
    int b = 5;
    swap(&a,&b);
    printf("After swapping, a = %d and b = %d\n", a, b);
    // int *pA = NULL;
    // pA = &a;

    // printf("a = %d\n", a);

    // printf("address of a = %p\n",pA);
    // printf("address of a = %p\n",&a);

    // printf("value of a = %d\n",*pA);
    // return 0;
}
/*
OUTPUT:

*/
