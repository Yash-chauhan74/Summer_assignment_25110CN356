// Write a program to Find sum and average of
// array.
#include<stdio.h>
int main()
{
    int arr[ 10 ] , i , n , s = 0 ;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("the sum of the elements in array will be:");
     for( int i = 0 ; i < n ; i++ )
     {
        s = s + arr[i];
     }
     printf("%d\n",s);
     printf("the average of the elements in array will be:");
     double avg = (double)s / n ;
     printf("%f",avg);
     
     return 0;
}