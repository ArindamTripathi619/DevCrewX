/*
QUESTION:
Write a C program to declare a union with three members: a (char), b (int), c (float).
Assign user-entered values to these members one by one and display them immediately. Then assign values all together and display the final values.
*/

#include <stdio.h>

// Define the union
union ABC {
    char a;
    int b;
    float c;
};

int main() {
    union ABC abc;

    // Assign and display values one by one
    printf("Enter a character: ");
    scanf(" %c", &abc.a);
    printf("abc.a = %c\n", abc.a);

    printf("Enter an integer: ");
    scanf("%d", &abc.b);
    printf("abc.b = %d\n", abc.b);

    printf("Enter a float: ");
    scanf("%f", &abc.c);
    printf("abc.c = %.6f\n", abc.c);

    // Assign values all together
    printf("\nAssigning values all together:\n");
    printf("Enter a character: ");
    scanf(" %c", &abc.a);
    printf("Enter an integer: ");
    scanf("%d", &abc.b);
    printf("Enter a float: ");
    scanf("%f", &abc.c);

    // Display the values
    printf("abc.a = %c\n", abc.a);
    printf("abc.b = %d\n", abc.b);
    printf("abc.c = %.6f\n", abc.c);

    return 0;
}

/*
OUTPUT:
Enter a character: A
abc.a = A
Enter an integer: 2
abc.b = 2
Enter a float: 5.8
abc.c = 5.800000

Assigning values all together:
Enter a character: A
Enter an integer: 2
Enter a float: 5.8
abc.a = Ü
abc.b = 1085905306
abc.c = 5.800000
*/
