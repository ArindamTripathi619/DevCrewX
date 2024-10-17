#include <stdio.h>
int main() {
    int num;
    // Input: Number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Determine if the number is positive, negative, or zero
    switch (num > 0) {
        case 1:
            printf("Entered number is positive\n");
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("Entered number is negative\n");
                    break;
                case 0:
                    printf("Entered number is zero\n");
                    break;
            }
            break;
    }
    return 0;
}
/*
    Enter a number: 9
    Entered number is positive
*/