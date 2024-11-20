#include <stdio.h>
#include <string.h>

typedef struct
{
    char bookTitle[30];
    char bookAuthor[30];
    int yearPublished;
    float bookPrice;
} LibraryBook;

void showAllBooks(LibraryBook collection[], int totalBooks)
{
    printf("\nBooks in the Library:\n");
    for (int idx = 0; idx < totalBooks; idx++)
    {
        printf("\nTitle: %s\n", collection[idx].bookTitle);
        printf("Author: %s\n", collection[idx].bookAuthor);
        printf("Year Published: %d\n", collection[idx].yearPublished);
        printf("Price: %.2f\n", collection[idx].bookPrice);
    }
}

void findBookByTitle(LibraryBook collection[], int totalBooks, char searchTitle[])
{
    int isFound = 0;
    for (int idx = 0; idx < totalBooks; idx++)
    {
        if (strcmp(collection[idx].bookTitle, searchTitle) == 0)
        {
            printf("\nBook found:\n");
            printf("Title: %s\n", collection[idx].bookTitle);
            printf("Author: %s\n", collection[idx].bookAuthor);
            printf("Year Published: %d\n", collection[idx].yearPublished);
            printf("Price: %.2f\n", collection[idx].bookPrice);
            isFound = 1;
            break;
        }
    }
    if (!isFound)
    {
        printf("\nNo book found with the title '%s'.\n", searchTitle);
    }
}

void findBooksByAuthor(LibraryBook collection[], int totalBooks, char searchAuthor[])
{
    int isFound = 0;
    printf("\nBooks by %s:\n", searchAuthor);
    for (int idx = 0; idx < totalBooks; idx++)
    {
        if (strcmp(collection[idx].bookAuthor, searchAuthor) == 0)
        {
            printf("Title: %s\n", collection[idx].bookTitle);
            printf("Year Published: %d\n", collection[idx].yearPublished);
            printf("Price: %.2f\n", collection[idx].bookPrice);
            isFound = 1;
        }
    }
    if (!isFound)
    {
        printf("No books found by %s.\n", searchAuthor);
    }
}

int main()
{
    LibraryBook library[999];
    int totalBooks;

    printf("Enter the total number of books: ");
    scanf("%d", &totalBooks);
    getchar();

    for (int idx = 0; idx < totalBooks; idx++)
    {
        printf("\nEnter details for book %d:\n", idx + 1);

        printf("Title: ");
        fgets(library[idx].bookTitle, sizeof(library[idx].bookTitle), stdin);
        library[idx].bookTitle[strcspn(library[idx].bookTitle, "\n")] = 0;

        printf("Author: ");
        fgets(library[idx].bookAuthor, sizeof(library[idx].bookAuthor), stdin);
        library[idx].bookAuthor[strcspn(library[idx].bookAuthor, "\n")] = 0;

        printf("Year Published: ");
        scanf("%d", &library[idx].yearPublished);

        printf("Price: ");
        scanf("%f", &library[idx].bookPrice);
        getchar();
    }

    showAllBooks(library, totalBooks);

    char searchTitle[100];
    printf("\nEnter the title to search for: ");
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0;
    findBookByTitle(library, totalBooks, searchTitle);

    char searchAuthor[100];
    printf("\nEnter the author to list books by: ");
    fgets(searchAuthor, sizeof(searchAuthor), stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = 0;
    findBooksByAuthor(library, totalBooks, searchAuthor);

    return 0;
}
