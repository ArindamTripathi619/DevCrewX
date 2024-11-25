/*
QUESTION:
Write a C program to store n students' information using an array of structures and display all the data.
Input:
Enter the number of students: 2
-------------------------------------------
Enter the student 1 data:
Roll Number: 1505201
Name: Rajesh Das
Gender: M
Mark in subject 1: 95
Mark in subject 2: 85
Mark in subject 3: 35
-------------------------------------------
Enter the student 2 data:
Roll Number: 1505202
Name: Yashraj
Gender: M
Mark in subject 1: 70
Mark in subject 2: 80
Mark in subject 3: 40
-------------------------------------------
Output:
Roll Number Name Gender Sub 1 Sub 2 Sub 3 Total
1505201     Rajesh Das M    95    85    35    215
1505202     Yashraj    M    70    80    40    190
*/

#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int rollNo;
    char name[50];
    char gender;
    int marks[3];
    int total;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // To consume newline

    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("\n-------------------------------------------\n");
        printf("Enter the student %d data:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume newline
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove trailing newline
        printf("Gender (M/F): ");
        scanf("%c", &students[i].gender);

        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Mark in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }

    // Display student data
    printf("\n-------------------------------------------\n");
    printf("Roll Number\tName\t\tGender\tSub 1\tSub 2\tSub 3\tTotal\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t%c\t%d\t%d\t%d\t%d\n",
               students[i].rollNo,
               students[i].name,
               students[i].gender,
               students[i].marks[0],
               students[i].marks[1],
               students[i].marks[2],
               students[i].total);
    }

    return 0;
}

/*
OUTPUT:
Enter the number of students: 2
-------------------------------------------
Enter the student 1 data:
Roll Number: 1505201
Name: Rajesh Das
Gender: M
Mark in subject 1: 95
Mark in subject 2: 85
Mark in subject 3: 35
-------------------------------------------
Enter the student 2 data:
Roll Number: 1505202
Name: Yashraj
Gender: M
Mark in subject 1: 70
Mark in subject 2: 80
Mark in subject 3: 40
-------------------------------------------
Roll Number Name       Gender Sub 1 Sub 2 Sub 3 Total
1505201     Rajesh Das M      95    85    35    215
1505202     Yashraj    M      70    80    40    190
*/
