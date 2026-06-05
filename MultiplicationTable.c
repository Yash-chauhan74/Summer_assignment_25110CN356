#include<stdio.h>
int main()
{
    int n ;
    printf ("The multiplication table of : ");
    scanf ("%d",&n);
    for( int i = 1 ; i <= 10 ; i++ )
    {
       int M = n * i ;
       printf ("%d \n",M);
    }
    return 0;
}