// Write a program to Create menu-driven array
// operations system.
#include <stdio.h>
int main()
{
    int arr[100], n, i, choice, pos, value, key;
    int found = 0, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Maximum\n");
        printf("6. Find Minimum\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position (1-%d): ", n + 1);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);

                if(pos >= 1 && pos <= n + 1)
                {
                    for(i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];

                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                else
                    printf("Invalid position.\n");
                break;

            case 3:
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n)
                {
                    for(i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];

                    n--;
                    printf("Element deleted successfully.\n");
                }
                else
                    printf("Invalid position.\n");
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);
                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");
                break;

            case 5:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 6:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 7);
    return 0;
}