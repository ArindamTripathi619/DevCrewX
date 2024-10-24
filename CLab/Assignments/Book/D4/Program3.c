/*
QUESTION:
WAP to input an amount value and break it into the smallest possible Indian currency notes. Possible Notes: 500, 100, 50, 20, 10, 5, 2, 1.

Input: Enter an amount value: 10387
Output: Currency Notes:
        500 number of Note(s): 20
        100 number of Note(s): 3
        50 number of Note(s): 1
        20 number of Note(s): 1
        10 number of Note(s): 1
        5 number of Note(s): 1
        2 number of Note(s): 1
        1 number of Note(s): 0
*/

#include <stdio.h>

int main() {
    int amount, note500, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter an amount value: ");
    scanf("%d", &amount);

    note500 = amount / 500;
    amount %= 500;
    
    note100 = amount / 100;
    amount %= 100;
    
    note50 = amount / 50;
    amount %= 50;
    
    note20 = amount / 20;
    amount %= 20;
    
    note10 = amount / 10;
    amount %= 10;
    
    note5 = amount / 5;
    amount %= 5;
    
    note2 = amount / 2;
    amount %= 2;
    
    note1 = amount / 1;

    printf("Currency Notes:\n");
    printf("500 number of Note(s): %d\n", note500);
    printf("100 number of Note(s): %d\n", note100);
    printf("50 number of Note(s): %d\n", note50);
    printf("20 number of Note(s): %d\n", note20);
    printf("10 number of Note(s): %d\n", note10);
    printf("5 number of Note(s): %d\n", note5);
    printf("2 number of Note(s): %d\n", note2);
    printf("1 number of Note(s): %d\n", note1);

    return 0;
}
/*
OUTPUT:
500 number of Note(s): 20
100 number of Note(s): 3
50 number of Note(s): 1
20 number of Note(s): 1
10 number of Note(s): 1
5 number of Note(s): 1
2 number of Note(s): 1
1 number of Note(s): 0
*/
