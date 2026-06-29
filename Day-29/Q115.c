// Write a program to Create menu-driven
// string operations system.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[100], str2[100], temp[100];
    int choice, i, result;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;

            case 3:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated String: %s\n", temp);
                break;

            case 4:
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Strings are Equal\n");
                else if(result < 0)
                    printf("First string is smaller\n");
                else
                    printf("First string is greater\n");
                break;

            case 5:
                printf("Reversed String: ");
                for(i = strlen(str1) - 1; i >= 0; i--)
                    printf("%c", str1[i]);
                printf("\n");
                break;

            case 6:
                strcpy(temp, str1);
                for(i = 0; temp[i] != '\0'; i++)
                    temp[i] = toupper((unsigned char)temp[i]);

                printf("Uppercase: %s\n", temp);
                break;

            case 7:
                strcpy(temp, str1);
                for(i = 0; temp[i] != '\0'; i++)
                    temp[i] = tolower((unsigned char)temp[i]);
                printf("Lowercase: %s\n", temp);
                break;

            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 8);
    return 0;
}