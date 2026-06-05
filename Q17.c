//wap to check perfect number
#include<stdio.h>
int main()
{
    int n , s = 0;
    printf("enter the number :");
    scanf("%d",&n);
    for( int i = 1 ; i < n ; i++)
    {
        int x = n % i;
        if( x == 0)
        s = s + i;
        else continue;
    }
    if ( s == n )
    printf("%d is the perfect number",n);
    else printf("%d is not a perfect number",n);
    return 0;

}