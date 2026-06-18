// Write a program to Union of arrays. 
#include <stdio.h>

int main()
{
    int arr1[] = {4,3,2,1};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;
    int unionArr[20];
    int size = 0;
    for (int i = 0; i < n1; i++)
    {
        unionArr[size++] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        int found = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArr[size++] = arr2[i];
        }
    }
    printf("Union of arrays: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
    }
    return 0;
}