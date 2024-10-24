/*
QUESTION:
WAP to display the grade system of KIIT University based on the total marks secured by a student in a semester. Use switch-case statement.

Input: Enter the total mark secured by a student: 77
Output: Secured grade is A.
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter the total mark secured by a student: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9: printf("Secured grade is O\n"); break;
        case 8: printf("Secured grade is E\n"); break;
        case 7: printf("Secured grade is A\n"); break;
        case 6: printf("Secured grade is B\n"); break;
        case 5: printf("Secured grade is C\n"); break;
        default: printf("Secured grade is F\n");
    }

    return 0;
}
/*
OUTPUT:
Secured grade is A.
*/
