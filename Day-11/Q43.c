// Write a program to Write function to check
// prime.
#include<stdio.h>
void primenum( int a )
{
    int x = 1;
    for( int i = 2 ; i < a ; i ++ )
    {
    if( a % i == 0)
    {
     x = 0;
     break;
    }
    }
    if( a == 0 || a == 1 ) printf("the number is neither prime nor composite");
    else if( x==1 ) printf("the number is prime");
    else  printf("the number is composite");
}
int main()
{
int n ;
printf("Enter the number : ");
scanf("%d",&n);
    primenum(n);
return 0;
}