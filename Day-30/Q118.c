// Write a program to Create mini library
// system.
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
};

struct Book b[MAX];
int n = 0;

void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main()
{
    int choice;

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addBook()
{
    printf("Enter Book ID: ");
    scanf("%d", &b[n].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[n].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[n].author);

    n++;

    printf("Book Added Successfully.\n");
}

void displayBooks()
{
    int i;

    if(n == 0)
    {
        printf("No Books Available.\n");
        return;
    }

    printf("\nID\tTitle\t\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n", b[i].id, b[i].title, b[i].author);
    }
}

void searchBook()
{
    int id, i;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            printf("\nBook Found\n");
            printf("ID : %d\n", b[i].id);
            printf("Title : %s\n", b[i].title);
            printf("Author : %s\n", b[i].author);
            return;
        }
    }

    printf("Book Not Found.\n");
}

void issueBook()
{
    int id, i;

    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            printf("Book Issued Successfully.\n");
            return;
        }
    }

    printf("Book Not Found.\n");
}

void returnBook()
{
    int id, i;

    printf("Enter Book ID to Return: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == id)
        {
            printf("Book Returned Successfully.\n");
            return;
        }
    }

    printf("Book Not Found.\n");
}