/*
QUESTION:
WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use else-if ladder statement.

Input 1: Enter total mark secured by the student: 55
Output 1: Secured grade is C.
Input 2: Enter total mark secured by the student: 95
Output 2: Secured grade is O.
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter total mark secured by the student: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Secured grade is O\n");
    } else if (marks >= 80) {
        printf("Secured grade is E\n");
    } else if (marks >= 70) {
        printf("Secured grade is A\n");
    } else if (marks >= 60) {
        printf("Secured grade is B\n");
    } else if (marks >= 50) {
        printf("Secured grade is C\n");
    } else if (marks >= 40) {
        printf("Secured grade is D\n");
    } else {
        printf("Secured grade is F\n");
    }

    return 0;
}
/*
OUTPUT:
Secured grade is C.
Secured grade is O.
*/
