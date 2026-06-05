//Write a program to Check strong number. 
#include<stdio.h>
int fact(int n)
{
    int x = 1;
     for( int i = 2 ; i <= n ; i++ )
    {
        x = x * i ;
    }
    return x;
}
int main()
{
    int n , s = 0 ;
    printf("Enter the number :");
    scanf("%d",&n);
    int num = n ;
    while ( n != 0 )
    {
        int x = n % 10 ;
        s = s + fact( x );
        n = n / 10;
    }
    if( s == num) printf("%d is the strong number",num);
    else printf("%d is not the strong number ",num);
    return 0;
}