/*
QUESTION:
WAP to add two times in hour, minute, and second format entered through the keyboard. Input must be taken in such a way that the sum should not exceed 24 hours.

Input: Enter the first time in hour, minute, and second: 11 45 34
       Enter the second time in hour, minute, and second: 09 28 41
Output: Sum of the two times = 21:14:15
*/

#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2, h_total, m_total, s_total;

    printf("Enter the first time in hour, minute, and second: ");
    scanf("%d %d %d", &h1, &m1, &s1);
    
    printf("Enter the second time in hour, minute, and second: ");
    scanf("%d %d %d", &h2, &m2, &s2);

    s_total = s1 + s2;
    m_total = m1 + m2 + (s_total / 60);
    h_total = h1 + h2 + (m_total / 60);

    s_total %= 60;
    m_total %= 60;
    h_total %= 24;

    printf("Sum of the two times = %02d:%02d:%02d\n", h_total, m_total, s_total);

    return 0;
}
/*
OUTPUT:
Sum of the two times = 21:14:15
*/
