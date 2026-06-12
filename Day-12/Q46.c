// Write a program to Write function for
// Armstrong.
#include<stdio.h>
#include<math.h>
void armstrong ( int n )
{
    int count = 0 , sum = 0 , num = n , r ;
    while( n != 0 )
    {
        n = n / 10;
        count++;
    }
    int original = num;
    while( num != 0 ){
    r = num % 10 ;
    sum = sum + pow( r , count );
    num = num / 10 ; 
    }
    if ( original == sum ) printf("The number is armstrong");
    else printf("The number is not armstrong");
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}