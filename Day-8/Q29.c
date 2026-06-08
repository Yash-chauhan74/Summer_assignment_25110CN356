//Write a program to Print half pyramid pattern. 
#include<stdio.h>
int main()
{
    int i , n ;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for( i = 1 ; i <= n ; i ++ )
    {
        for (int j = 1 ; j <= i ; j ++ )
       { 
        printf("*");
       }
       printf("\n");
    }
    return 0;
}