/*
QUESTION:
Write a C program to store `n` books' data using structures with dynamic memory allocation and display books by a specific author.
Input:
Enter the number of books: 3
-------------------------------------------
Enter Book 1 Details:
Title: Let Us C
Author: Y Kanetkar
Publication: BPB
Price: 500
-------------------------------------------
Enter Book 2 Details:
Title: C: The Complete Reference
Author: Herbert Schildt
Publication: Osborne
Price: 812
-------------------------------------------
Enter Book 3 Details:
Title: Programming in ANSI C
Author: Balagurusamy
Publication: Tata McGraw-Hill
Price: 641
-------------------------------------------
Enter the author name to find the details: Herbert Schildt
Output:
C: The Complete Reference by Herbert Schildt, Osborne Publication, Rs 812
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
struct Book {
    char title[100];
    char author[50];
    char publication[50];
    int price;
};

int main() {
    int n;
    char searchAuthor[50];

    // Input the number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); // Consume newline character

    // Dynamically allocate memory for books
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
    if (books == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input book details
    for (int i = 0; i < n; i++) {
        printf("\n-------------------------------------------\n");
        printf("Enter Book %d Details:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // Remove newline
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        printf("Publication: ");
        fgets(books[i].publication, sizeof(books[i].publication), stdin);
        books[i].publication[strcspn(books[i].publication, "\n")] = '\0';
        printf("Price: ");
        scanf("%d", &books[i].price);
        getchar(); // Consume newline
    }

    // Input the author to search for
    printf("\nEnter the author name to find the details: ");
    fgets(searchAuthor, sizeof(searchAuthor), stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = '\0'; // Remove newline

    // Display books by the specified author
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, searchAuthor) == 0) {
            printf("\n%s by %s, %s Publication, Rs %d\n",
                   books[i].title, books[i].author, books[i].publication, books[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo books found by author %s.\n", searchAuthor);
    }

    // Free allocated memory
    free(books);

    return 0;
}

/*
OUTPUT:
Enter the number of books: 3
-------------------------------------------
Enter Book 1 Details:
Title: Let Us C
Author: Y Kanetkar
Publication: BPB
Price: 500
-------------------------------------------
Enter Book 2 Details:
Title: C: The Complete Reference
Author: Herbert Schildt
Publication: Osborne
Price: 812
-------------------------------------------
Enter Book 3 Details:
Title: Programming in ANSI C
Author: Balagurusamy
Publication: Tata McGraw-Hill
Price: 641
-------------------------------------------
Enter the author name to find the details: Herbert Schildt
C: The Complete Reference by Herbert Schildt, Osborne Publication, Rs 812
*/
