// Write a program to Create library
// management system.
#include <stdio.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[n].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                }
                else
                {
                    printf("\nBook Records:\n");
                    printf("----------------------------------------\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("Book %d\n", i + 1);
                        printf("ID     : %d\n", book[i].id);
                        printf("Name   : %s\n", book[i].name);
                        printf("Author : %s\n", book[i].author);
                        printf("----------------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo books available.\n");
                    break;
                }

                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("ID     : %d\n", book[i].id);
                        printf("Name   : %s\n", book[i].name);
                        printf("Author : %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}