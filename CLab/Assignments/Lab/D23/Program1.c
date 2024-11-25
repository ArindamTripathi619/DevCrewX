/*
QUESTION:
Write a C program to store one student's information using a structure and display all the data.
Input:
Enter the student's data:
Roll Number: 1505201
Name: Rajesh Agarwal
Gender: M
Marks: 95
Output:
The student's details are:
Roll Number: 1505201
Name: Rajesh Agarwal
Gender: M
Marks: 95
*/

#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int rollNo;
    char name[50];
    char gender;
    int marks;
};

int main() {
    struct Student student;

    // Input student information
    printf("Enter the student's data:\n");
    printf("Roll Number: ");
    scanf("%d", &student.rollNo);
    getchar(); // To consume the newline character
    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline
    printf("Gender (M/F): ");
    scanf("%c", &student.gender);
    printf("Marks: ");
    scanf("%d", &student.marks);

    // Display the information
    printf("\nThe student's details are:\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Gender: %c\n", student.gender);
    printf("Marks: %d\n", student.marks);

    return 0;
}

/*
OUTPUT:
Enter the student's data:
Roll Number: 1505201
Name: Rajesh Agarwal
Gender: M
Marks: 95

The student's details are:
Roll Number: 1505201
Name: Rajesh Agarwal
Gender: M
Marks: 95
*/
