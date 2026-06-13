// Write a program to Find largest and smallest
// element.
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
    int max = arr[0];
     for( int i = 0 ; i < n ; i++ )
     {
       if ( max < arr[i])
       max = arr[i]; 
     }
      printf("the largest element in array will be: %d \n",max);
      int min = arr[0];
     for( int i = 0 ; i < n ; i++ )
     {
       if ( min > arr[i])
       min = arr[i]; 
     }
      printf("the smallest element in array will be: %d",min);

     return 0;
}