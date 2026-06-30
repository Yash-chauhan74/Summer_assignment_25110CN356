// Write a program to Create mini employee
// management system.
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee e[MAX];
int n = 0;

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
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

void addEmployee()
{
    printf("Enter Employee ID: ");
    scanf("%d", &e[n].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e[n].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", e[n].department);

    printf("Enter Salary: ");
    scanf("%f", &e[n].salary);

    n++;

    printf("Employee Added Successfully.\n");
}

void displayEmployees()
{
    int i;

    if(n == 0)
    {
        printf("No Employee Records Found.\n");
        return;
    }

    printf("\nID\tName\t\tDepartment\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               e[i].id, e[i].name, e[i].department, e[i].salary);
    }
}

void searchEmployee()
{
    int id, i;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(e[i].id == id)
        {
            printf("\nEmployee Found\n");
            printf("ID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Department: %s\n", e[i].department);
            printf("Salary: %.2f\n", e[i].salary);
            return;
        }
    }

    printf("Employee Not Found.\n");
}

void updateEmployee()
{
    int id, i;

    printf("Enter Employee ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(e[i].id == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", e[i].name);

            printf("Enter New Department: ");
            scanf(" %[^\n]", e[i].department);

            printf("Enter New Salary: ");
            scanf("%f", &e[i].salary);

            printf("Employee Record Updated Successfully.\n");
            return;
        }
    }

    printf("Employee Not Found.\n");
}

void deleteEmployee()
{
    int id, i, j;

    printf("Enter Employee ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(e[i].id == id)
        {
            for(j = i; j < n - 1; j++)
            {
                e[j] = e[j + 1];
            }

            n--;

            printf("Employee Deleted Successfully.\n");
            return;
        }
    }

    printf("Employee Not Found.\n");
}