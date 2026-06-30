// Write a program to Create student record
// system using arrays and strings.
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Record Added Successfully.\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Records Found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");
                    printf("Roll\tName\t\tMarks\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
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
                        printf("\nRecord Found\n");
                        printf("Roll Number: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Record Not Found.\n");

                break;

            case 4:
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }
                        n--;
                        found = 1;
                        printf("Student Record Deleted Successfully.\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Record Not Found.\n");

                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}