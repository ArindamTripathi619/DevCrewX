/*
QUESTION:
The annual examination results of 100 students are tabulated as follows:
Roll No, Subject 1, Subject 2, Subject 3
Write a program to read the data and determine:
(a) Total marks obtained by each student
(b) The highest marks in each subject and the Roll No. of the students who secured it.
(c) The student who obtained the highest total marks.
*/

#include <stdio.h>

int main() {
    int n = 100;  // Number of students
    int roll[n], subject1[n], subject2[n], subject3[n], total[n];
    int i, max1 = 0, max2 = 0, max3 = 0, max_total = 0;
    int roll_max1, roll_max2, roll_max3, roll_max_total;
    
    // Input data for each student
    for (i = 0; i < n; i++) {
        printf("Enter roll number, marks in subject 1, subject 2, subject 3 for student %d: ", i + 1);
        scanf("%d %d %d %d", &roll[i], &subject1[i], &subject2[i], &subject3[i]);
        
        // Calculate total marks for each student
        total[i] = subject1[i] + subject2[i] + subject3[i];
        
        // Check for highest marks in each subject
        if (subject1[i] > max1) {
            max1 = subject1[i];
            roll_max1 = roll[i];
        }
        if (subject2[i] > max2) {
            max2 = subject2[i];
            roll_max2 = roll[i];
        }
        if (subject3[i] > max3) {
            max3 = subject3[i];
            roll_max3 = roll[i];
        }
        
        // Check for highest total marks
        if (total[i] > max_total) {
            max_total = total[i];
            roll_max_total = roll[i];
        }
    }
    
    // Display results
    printf("Highest marks in Subject 1: %d (Roll No: %d)\n", max1, roll_max1);
    printf("Highest marks in Subject 2: %d (Roll No: %d)\n", max2, roll_max2);
    printf("Highest marks in Subject 3: %d (Roll No: %d)\n", max3, roll_max3);
    printf("The student who obtained the highest total marks: Roll No: %d with %d marks\n", roll_max_total, max_total);
    
    return 0;
}

/*
OUTPUT:
(Example with 3 students instead of 100)
Enter roll number, marks in subject 1, subject 2, subject 3 for student 1: 101 85 90 80
Enter roll number, marks in subject 1, subject 2, subject 3 for student 2: 102 88 86 79
Enter roll number, marks in subject 1, subject 2, subject 3 for student 3: 103 90 91 85
Highest marks in Subject 1: 90 (Roll No: 103)
Highest marks in Subject 2: 91 (Roll No: 103)
Highest marks in Subject 3: 85 (Roll No: 103)
The student who obtained the highest total marks: Roll No: 103 with 266 marks
*/
