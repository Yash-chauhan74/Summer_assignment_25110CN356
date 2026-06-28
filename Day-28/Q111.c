// Write a program to Create ticket booking
// system.
#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
    float price;
};

int main()
{
    struct Ticket t;
    int choice;
    const float fare = 250.0;

    t.seats = 0;
    t.price = 0;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.price = t.seats * fare;

                printf("Ticket Booked Successfully!\n");
                break;

            case 2:
                if(t.seats == 0)
                {
                    printf("No ticket booked.\n");
                }
                else
                {
                    printf("\n----- Ticket Details -----\n");
                    printf("Passenger Name : %s\n", t.name);
                    printf("Seats Booked   : %d\n", t.seats);
                    printf("Total Fare     : %.2f\n", t.price);
                }
                break;

            case 3:
                if(t.seats == 0)
                {
                    printf("No booking found.\n");
                }
                else
                {
                    t.seats = 0;
                    t.price = 0;
                    printf("Ticket Cancelled Successfully.\n");
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