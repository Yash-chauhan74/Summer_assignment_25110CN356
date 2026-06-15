// Write a program to Rotate array left. 
#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    int temp;

    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before rotation: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int d;
    printf(" \n how many positions do you want to rotate: ");
    scanf("%d",&d);
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);

    printf("\nAfter left rotation : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}