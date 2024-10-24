/*
QUESTION:
WAP to convert given paisa into its equivalent rupee and paisa.
Input: Enter the amount in paisa: 550
Output: Entered amount = 5 Rupees and 50 paisa
*/

#include <stdio.h>

int main() {
    int paisa, rupees, remaining_paisa;
    printf("Enter the amount in paisa: ");
    scanf("%d", &paisa);
    
    rupees = paisa / 100;
    remaining_paisa = paisa % 100;
    
    printf("Entered amount = %d Rupees and %d paisa\n", rupees, remaining_paisa);
    return 0;
}
/*
OUTPUT:
Enter the amount in paisa: 550
Entered amount = 5 Rupees and 50 paisa
*/
