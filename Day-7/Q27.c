// Write a program to Recursive sum of digits. 
#include<stdio.h>
int sum ( int m)
{
    if ( m == 0 )
    return 0;
    else 
    return ( (m % 10) + sum ( m / 10 )) ;
}
int main()
{
int n;
printf (" Enter the number ");
scanf("%d",&n);
printf("the sum of digits will be :%d",sum(n));
return 0;
}