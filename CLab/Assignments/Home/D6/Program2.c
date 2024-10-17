#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input: Total marks secured by a student
    printf("Enter the total mark secured by a student: ");
    scanf("%d", &marks);

    // Determine the grade based on marks
    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'O';
            break;
        case 8:
            grade = 'E';
            break;
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        default:
            grade = 'F';  // Fail grade
    }

    // Output the result
    printf("Secured grade is %c\n", grade);

    return 0;
}
/*
    Enter the total mark secured by a student: 91
    Secured grade is O
*/
