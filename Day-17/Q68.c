// Write a program to Find common elements. 
#include<stdio.h>
int main()
{
    int n , i , j;
printf("Enter array size : ");
scanf("%d",&n);
int arr[n];
printf("Enter array elements : ");
for (int i = 0 ; i < n ; i++)
scanf("%d",&arr[i]);
printf("Common elements are : ");
for ( i = 0 ; i < n ; i++)
{
    for ( j = i+1 ; j < n ; j++)
    {
        if ( arr[i]==arr[j] ){
        printf("%d ",arr[i]);
        break;
        }
    }
}
return 0;
}