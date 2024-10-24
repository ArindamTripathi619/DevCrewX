/*
QUESTION:
Write a C program to determine eligibility for admission based on the following criteria:
- Marks in Maths >= 65, Marks in Physics >= 55, Marks in Chemistry >= 50
- Total in all three subjects >= 190 or Total in Maths and Physics >= 140

Input 1: Enter the marks obtained in Physics, Chemistry, and Mathematics: 65 51 72
Output 1: The candidate is not eligible for admission.
Input 2: Enter the marks obtained in Physics, Chemistry, and Mathematics: 65 58 72
Output 2: The candidate is eligible for admission.
*/

#include <stdio.h>

int main() {
    int phy, chem, math;
    printf("Enter the marks obtained in Physics, Chemistry, and Mathematics: ");
    scanf("%d %d %d", &phy, &chem, &math);

    if (math >= 65 && phy >= 55 && chem >= 50 && 
        (math + phy + chem >= 190 || math + phy >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
/*
OUTPUT:
The candidate is not eligible for admission.
The candidate is eligible for admission.
*/
