//Write a program to Print factors of a number. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for( int i = 1 ; i <= n ; i++)
     {
        int x = n % i;
        if( x == 0)
        {
            printf("%d\n",i);
        }
        else continue;
     }
     return 0;
}