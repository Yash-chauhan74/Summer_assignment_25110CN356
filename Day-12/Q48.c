// Write a program to Write function for perfect
// number.
#include<stdio.h>
void perfectnum( int n ){
int s = 0;
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
}
int main()
{
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    perfectnum(n);
    return 0;

}