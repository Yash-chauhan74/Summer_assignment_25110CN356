// Write a program to Merge arrays. 
#include<stdio.h>
int main()
{
    int arr1[4] = { 2,4,5,1 };
    int arr2[5] = {9,6,0,8,12};
    int n1 = 4 , n2 = 5;
    int arr3[9] , i , j ;
     for( i = 0; i < 4; i++)
     {
        arr3[i] = arr1[i];
     }
     for( j = 0; j < 5; j++)
     {
        arr3[i+j] = arr2[j];
     }
     printf("the merged array will be : ");
     for( int i = 0; i < 9; i++)
     {
        printf("%d ",arr3[i]);
     }
     return 0;

}