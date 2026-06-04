#include<stdio.h>
int main()
{
    int n , x = 1 ;
    printf ("enter the number : ");
    scanf ("%d",&n);
    for( int i = 2 ; i <= n ; i++ )
    {
        x = x * i ;
    }
    printf ("The factorial of %d is : %d",n,x);
    return 0;
}