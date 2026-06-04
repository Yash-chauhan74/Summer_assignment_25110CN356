#include<stdio.h>
int main()
{
    int n , s = 0 ;
    printf ("enter the vaue of N : ");
    scanf ("%d",&n);
    for( int i = 1 ; i <= n ; i++ )
    {
        s = s + i ;
    }
    printf ("The sum of first %d natural numbers will be : %d",n,s);
    return 0;
}