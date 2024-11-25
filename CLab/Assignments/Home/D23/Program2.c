/*
QUESTION:
Write a C program to store `n` students' data and display their total marks and the list of students who failed in each subject.
Input:
Enter the number of students: 3
-------------------------------------------
Enter the student 1 data:
Roll Number: 1505201
Name: Rajesh
Gender: M
Mark in subject 1: 35
Mark in subject 2: 85
Mark in subject 3: 65
-------------------------------------------
Enter the student 2 data:
Roll Number: 1505202
Name: Yashraj
Gender: M
Mark in subject 1: 70
Mark in subject 2: 81
Mark in subject 3: 40
-------------------------------------------
Enter the student 3 data:
Roll Number: 1505203
Name: Ankita
Gender: F
Mark in subject 1: 73
Mark in subject 2: 85
Mark in subject 3: 30
-------------------------------------------
Output:
Roll Number Name    Gender Sub 1 Sub 2 Sub 3 Total
1505201     Rajesh  M      35    85    65    185
1505202     Yashraj M      70    81    40    191
1505203     Ankita  F      73    85    30    188
Students failed in Subject 1: Rajesh
Students failed in Subject 3: Ankita
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
    getchar(); // Consume newline character

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\n-------------------------------------------\n");
        printf("Enter the student %d data:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // Consume newline
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
        printf("Gender (M/F): ");
        scanf("%c", &students[i].gender);
        getchar(); // Consume newline

        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Mark in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }

    // Display student data
    printf("\nRoll Number\tName\tGender\tSub 1\tSub 2\tSub 3\tTotal\n");
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

    // Display students failed in each subject
    for (int j = 0; j < 3; j++) {
        printf("\nStudents failed in Subject %d: ", j + 1);
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (students[i].marks[j] < 40) {
                printf("%s ", students[i].name);
                found = 1;
            }
        }
        if (!found) {
            printf("None");
        }
    }

    printf("\n");
    return 0;
}

/*
OUTPUT:
Enter the number of students: 3
-------------------------------------------
Enter the student 1 data:
Roll Number: 1505201
Name: Rajesh
Gender: M
Mark in subject 1: 35
Mark in subject 2: 85
Mark in subject 3: 65
-------------------------------------------
Enter the student 2 data:
Roll Number: 1505202
Name: Yashraj
Gender: M
Mark in subject 1: 70
Mark in subject 2: 81
Mark in subject 3: 40
-------------------------------------------
Enter the student 3 data:
Roll Number: 1505203
Name: Ankita
Gender: F
Mark in subject 1: 73
Mark in subject 2: 85
Mark in subject 3: 30
-------------------------------------------
Roll Number Name    Gender Sub 1 Sub 2 Sub 3 Total
1505201     Rajesh  M      35    85    65    185
1505202     Yashraj M      70    81    40    191
1505203     Ankita  F      73    85    30    188

Students failed in Subject 1: Rajesh
Students failed in Subject 3: Ankita
*/
