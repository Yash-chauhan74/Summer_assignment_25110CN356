// Write a program to Create marksheet
// generation system.
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do
    {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Marksheet\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks of Subject 1: ");
                scanf("%d", &s[n].m1);

                printf("Enter Marks of Subject 2: ");
                scanf("%d", &s[n].m2);

                printf("Enter Marks of Subject 3: ");
                scanf("%d", &s[n].m3);

                s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
                s[n].percentage = s[n].total / 3.0;

                n++;
                printf("Marksheet generated successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No records found.\n");
                }
                else
                {
                    printf("\nRoll\tName\tM1\tM2\tM3\tTotal\tPercentage\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f%%\n",
                               s[i].roll,
                               s[i].name,
                               s[i].m1,
                               s[i].m2,
                               s[i].m3,
                               s[i].total,
                               s[i].percentage);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\n----- Student Marksheet -----\n");
                        printf("Roll No      : %d\n", s[i].roll);
                        printf("Name         : %s\n", s[i].name);
                        printf("Subject 1    : %d\n", s[i].m1);
                        printf("Subject 2    : %d\n", s[i].m2);
                        printf("Subject 3    : %d\n", s[i].m3);
                        printf("Total Marks  : %d\n", s[i].total);
                        printf("Percentage   : %.2f%%\n", s[i].percentage);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student record not found.\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}