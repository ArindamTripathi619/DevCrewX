/*
QUESTION:
Write a C program to create a `DATE` data type using `typedef`. Implement functions for:
a) Displaying a date in DD-MM-YYYY format.
b) Returning the next date.
c) Returning the next month.
d) Returning the next year.
e) Adding days to a date.
f) Adding months to a date.
g) Adding years to a date.
h) Returning the month name from a date.
*/

#include <stdio.h>
#include <string.h>

// Define the DATE structure using typedef
typedef struct {
    int day;
    int month;
    int year;
} DATE;

// Helper function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Helper function to get the number of days in a month
int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month - 1];
}

// a) Function to display a date
void displayDate(DATE d) {
    printf("%02d-%02d-%d\n", d.day, d.month, d.year);
}

// b) Function to return the next date
DATE nextDate(DATE d) {
    d.day++;
    if (d.day > daysInMonth(d.month, d.year)) {
        d.day = 1;
        d.month++;
        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }
    return d;
}

// c) Function to return the next month
DATE nextMonth(DATE d) {
    d.month++;
    if (d.month > 12) {
        d.month = 1;
        d.year++;
    }
    return d;
}

// d) Function to return the next year
DATE nextYear(DATE d) {
    d.year++;
    return d;
}

// e) Function to add a number of days to a date
DATE addDays(DATE d, int daysToAdd) {
    for (int i = 0; i < daysToAdd; i++) {
        d = nextDate(d);
    }
    return d;
}

// f) Function to add a number of months to a date
DATE addMonths(DATE d, int monthsToAdd) {
    d.month += monthsToAdd;
    while (d.month > 12) {
        d.month -= 12;
        d.year++;
    }
    int daysInCurrentMonth = daysInMonth(d.month, d.year);
    if (d.day > daysInCurrentMonth) {
        d.day = daysInCurrentMonth;
    }
    return d;
}

// g) Function to add a number of years to a date
DATE addYears(DATE d, int yearsToAdd) {
    d.year += yearsToAdd;
    return d;
}

// h) Function to return the name of the month
const char* getMonthName(DATE d) {
    const char* monthNames[] = {"January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};
    return monthNames[d.month - 1];
}

int main() {
    DATE date;
    int daysToAdd, monthsToAdd, yearsToAdd;

    // Input the date
    printf("Enter the date (DD-MM-YYYY): ");
    scanf("%d-%d-%d", &date.day, &date.month, &date.year);

    // Input values to add
    printf("Enter the number of days to add: ");
    scanf("%d", &daysToAdd);
    printf("Enter the number of months to add: ");
    scanf("%d", &monthsToAdd);
    printf("Enter the number of years to add: ");
    scanf("%d", &yearsToAdd);

    // Display the date and perform manipulations
    printf("\nEntered Date: ");
    displayDate(date);

    printf("Next Day: ");
    displayDate(nextDate(date));

    printf("Next Month: ");
    displayDate(nextMonth(date));

    printf("Next Year: ");
    displayDate(nextYear(date));

    printf("After addition of %d days: ", daysToAdd);
    displayDate(addDays(date, daysToAdd));

    printf("After addition of %d months: ", monthsToAdd);
    displayDate(addMonths(date, monthsToAdd));

    printf("After addition of %d years: ", yearsToAdd);
    displayDate(addYears(date, yearsToAdd));

    printf("Month Name: %s\n", getMonthName(date));

    return 0;
}

/*
OUTPUT:
Enter the date (DD-MM-YYYY): 24-03-2023
Enter the number of days to add: 9
Enter the number of months to add: 2
Enter the number of years to add: 3

Entered Date: 24-03-2023
Next Day: 25-03-2023
Next Month: 24-04-2023
Next Year: 24-03-2024
After addition of 9 days: 02-04-2023
After addition of 2 months: 24-05-2023
After addition of 3 years: 24-03-2026
Month Name: March
*/
