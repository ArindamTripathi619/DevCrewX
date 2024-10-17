/*
WAP to print the multiplication table of an inputted number. 
Input: Enter a number: 5
Output: 5 × 1 = 5
        5 × 2 = 10
        5 × 3 = 15
        5 × 4 = 20
        5 × 5 = 25
        5 × 6 = 30
        5 × 7 = 35
        5 × 8 = 40
        5 × 9 = 45
        5 × 10 = 50
*/
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", num, i, num * i);
    }
    printf("\n");
    return 0;
}
/*
OUTPUT:
Enter a number: 7
7 × 1 = 7
7 × 2 = 14
7 × 3 = 21
7 × 4 = 28
7 × 5 = 35
7 × 6 = 42
7 × 7 = 49
7 × 8 = 56
7 × 9 = 63
7 × 10 = 70
*/