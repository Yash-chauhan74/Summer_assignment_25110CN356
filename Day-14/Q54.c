// Write a program to Frequency of an element. 
#include<stdio.h>
int main()
{
    int n , i , j ,count = 0 , key ;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n]; 
    printf("Enter the elements of the array :");
    for (int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number whose frequecy you want :");
    scanf("%d",&key);
      for ( i = 0 ; i < n ; i++ )
      {
        if ( arr[i] == key)
        count++; 
      }
      printf("the frequency of the number %d is : %d",key , count);
    return 0;
}