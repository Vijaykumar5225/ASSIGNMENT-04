#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    char title[50];
    char author[50];
    int year_published;
};

struct book library[MAX_BOOKS];
int num_books = 0;

void add_book() {
    if (num_books == MAX_BOOKS) {
        printf("Error: Library is full.\n");
        return;
    }

    printf("Enter the book title: ");
    scanf("%s", library[num_books].title);

    printf("Enter the author name: ");
    scanf("%s", library[num_books].author);

    printf("Enter the year published: ");
    scanf("%d", &library[num_books].year_published);

    num_books++;
    printf("Book added to library.\n");
}

void display_books() {
    if (num_books == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("List of books in the library:\n");
    for (int i = 0; i < num_books; i++) {
        printf("%s by %s (%d)\n", library[i].title, library[i].author, library[i].year_published);
    }
}

void list_books_by_author() {
    char author[50];
    int count = 0;

    printf("Enter the author name: ");
    scanf("%s", author);

    printf("List of books by %s:\n", author);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("%s (%d)\n", library[i].title, library[i].year_published);
            count++;
        }
    }

    if (count == 0) {
        printf("No books by %s found in the library.\n", author);
    } else {
        printf("Total books by %s: %d\n", author, count);
    }
}

void list_book_count() {
    printf("Total books in the library: %d\n", num_books);
}

int main() {
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                list_book_count();
                break;
            case 5:
                printf("Exiting library management system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
