/*
QUESTION:
Write a C program to perform swapping of two integers using a function SWAP.
*/

#include <stdio.h>

// Function to swap two numbers
void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n1, n2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    
    // Call SWAP function
    SWAP(&n1, &n2);
    
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
    
    return 0;
}

/*
OUTPUT:
Enter two numbers: 5 7
Before swapping: n1 = 5, n2 = 7
After swapping: n1 = 7, n2 = 5
*/
