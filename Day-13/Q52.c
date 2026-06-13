// Write a program to Count even and odd
// elements.
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
    printf("the even elements in the array be : ");
    for( int i = 0 ; i < n ; i++ )
    {
        if ( arr [ i ] % 2 == 0)
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("the odd elements in the array be : ");
    for( int i = 0 ; i < n ; i++ )
    {
        if ( arr [ i ] % 2 != 0)
        printf("%d ", arr[i]);
    }
    
     return 0;
}