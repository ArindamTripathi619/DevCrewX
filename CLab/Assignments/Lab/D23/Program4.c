/*
QUESTION:
Write a C program to store n employees' data dynamically using structures and calculate the gross pay.
Input:
Enter the number of employees: 3
-------------------------------------------
Enter Employee 1 Details:
Name: John Doe
Gender (M/F): M
Designation: Manager
Department: Sales
Basic Pay: 50000
------------------------------------------
Enter Employee 2 Details:
Name: Jane Smith
Gender (M/F): F
Designation: Engineer
Department: Engineering
Basic Pay: 35000
------------------------------------------
Enter Employee 3 Details:
Name: Alex Johnson
Gender (M/F): M
Designation: Analyst
Department: Finance
Basic pay: 45000
------------------------------------------
Output:
Name        Gender Designation Department   Basic Pay  Gross Pay
John Doe    M      Manager      Sales       50000      100000
Jane Smith  F      Engineer     Engineering 35000      70000
Alex Johnson M      Analyst      Finance    45000      90000
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
struct Employee {
    char name[50];
    char gender;
    char designation[30];
    char department[30];
    float basicPay;
    float grossPay;
};

int main() {
    int n;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar(); // Consume newline character

    // Dynamically allocate memory for employees
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (employees == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input employee data
    for (int i = 0; i < n; i++) {
        printf("\n-------------------------------------------\n");
        printf("Enter Employee %d Details:\n", i + 1);
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);
        getchar(); // Consume newline
        printf("Designation: ");
        fgets(employees[i].designation, sizeof(employees[i].designation), stdin);
        employees[i].designation[strcspn(employees[i].designation, "\n")] = '\0';
        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);
        employees[i].department[strcspn(employees[i].department, "\n")] = '\0';
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);

        // Calculate gross pay
        float HR = 0.25 * employees[i].basicPay;
        float DA = 0.75 * employees[i].basicPay;
        employees[i].grossPay = employees[i].basicPay + HR + DA;
    }

    // Display employee data
    printf("\n-------------------------------------------\n");
    printf("Name\t\tGender\tDesignation\tDepartment\tBasic Pay\tGross Pay\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%c\t%s\t\t%s\t%.2f\t%.2f\n",
               employees[i].name,
               employees[i].gender,
               employees[i].designation,
               employees[i].department,
               employees[i].basicPay,
               employees[i].grossPay);
    }

    // Free allocated memory
    free(employees);

    return 0;
}

/*
OUTPUT:
Enter the number of employees: 3
-------------------------------------------
Enter Employee 1 Details:
Name: John Doe
Gender (M/F): M
Designation: Manager
Department: Sales
Basic Pay: 50000
------------------------------------------
Enter Employee 2 Details:
Name: Jane Smith
Gender (M/F): F
Designation: Engineer
Department: Engineering
Basic Pay: 35000
------------------------------------------
Enter Employee 3 Details:
Name: Alex Johnson
Gender (M/F): M
Designation: Analyst
Department: Finance
Basic Pay: 45000
------------------------------------------
Name         Gender Designation Department   Basic Pay  Gross Pay
John Doe     M      Manager      Sales       50000.00   100000.00
Jane Smith   F      Engineer     Engineering 35000.00   70000.00
Alex Johnson M      Analyst      Finance     45000.00   90000.00
*/
