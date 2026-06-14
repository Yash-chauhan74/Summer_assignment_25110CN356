// Write a program to Linear search. 
#include<stdio.h>
int main()
{
    int n , search ;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :");
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    printf("Searching the element :");
    scanf("%d",&search);
    int x = 0 , i;
     for ( i = 0 ; i < n ; i++ )
    {
        if ( search == arr[i] ){
       x = 1;
        break;
    }
    }
    if (x == 1 )  printf("the element is present at %d index",i);
    else printf("the element is not present in the array ");
    return 0;
}