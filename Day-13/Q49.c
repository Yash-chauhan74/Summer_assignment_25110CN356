// Write a program to Input and display array. 
#include<stdio.h>
int main()
{
    int arr[ 10 ] , i , n ;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements in array will be:");
     for( int i = 0 ; i < n ; i++ )
     {
        printf("%d",arr[i]);
     }
     return 0;
}