// Write a program to Develop complete mini
// project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

struct Contact c[MAX];
int n = 0;

void addContact();
void displayContacts();
void searchContact();
void updateContact();
void deleteContact();

int main()
{
    int choice;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addContact()
{
    printf("Enter Contact ID: ");
    scanf("%d", &c[n].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", c[n].name);

    printf("Enter Phone Number: ");
    scanf("%s", c[n].phone);

    n++;

    printf("Contact Added Successfully.\n");
}

void displayContacts()
{
    int i;

    if(n == 0)
    {
        printf("No Contacts Available.\n");
        return;
    }

    printf("\nID\tName\t\tPhone Number\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n",
               c[i].id, c[i].name, c[i].phone);
    }
}

void searchContact()
{
    int id, i;

    printf("Enter Contact ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(c[i].id == id)
        {
            printf("\nContact Found\n");
            printf("ID : %d\n", c[i].id);
            printf("Name : %s\n", c[i].name);
            printf("Phone : %s\n", c[i].phone);
            return;
        }
    }

    printf("Contact Not Found.\n");
}

void updateContact()
{
    int id, i;

    printf("Enter Contact ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(c[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", c[i].name);

            printf("Enter New Phone Number: ");
            scanf("%s", c[i].phone);

            printf("Contact Updated Successfully.\n");
            return;
        }
    }

    printf("Contact Not Found.\n");
}

void deleteContact()
{
    int id, i, j;

    printf("Enter Contact ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(c[i].id == id)
        {
            for(j = i; j < n - 1; j++)
            {
                c[j] = c[j + 1];
            }

            n--;

            printf("Contact Deleted Successfully.\n");
            return;
        }
    }

    printf("Contact Not Found.\n");
}