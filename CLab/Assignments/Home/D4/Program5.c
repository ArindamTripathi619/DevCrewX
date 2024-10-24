/*
WAP in c to input the basic salary of an employee. From the basic calculate the DA 
(60% of basic), HRA(15% of basic) and Gross salary (Basic + DA + HRA). 
Input:   
Enter the basic salary: 10000 
Output: 
Basic: 10000 
DA: 6000 
HRA: 1500 
Gross Salary: 17500
*/

#include <stdio.h>

int main() {
    float basic_salary, DA, HRA, gross_salary;

    // Input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate DA, HRA, and Gross Salary
    DA = 0.60 * basic_salary;  // 60% of basic salary
    HRA = 0.15 * basic_salary;  // 15% of basic salary
    gross_salary = basic_salary + DA + HRA;  // Total Gross Salary

    // Output the results
    printf("Basic: %.2f\n", basic_salary);
    printf("DA: %.2f\n", DA);
    printf("HRA: %.2f\n", HRA);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

/*
OUTPUT:
Enter the basic salary: 30000
Basic: 30000.00
DA: 18000.00
HRA: 4500.00
Gross Salary: 52500.00
*/
