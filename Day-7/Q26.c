//Write a program to Recursive Fibonacci. 
#include<stdio.h>
int fibonacci (int m)
{
  if ( m==1 )
  return 0;
  else if ( m == 2)
  return 1;
  else 
  return ( fibonacci ( m-1) + fibonacci ( m-2 ));
}

int main()
{
int n;
printf("Enter the number upto which you want to print fibonacci :");
scanf(" %d",&n);
if ( n <= 0 )
printf("Invalid");
else
for ( int i = 1 ; i <= n ; i++)
printf("%d ",fibonacci(i));
return 0;
}