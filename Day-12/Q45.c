// Write a program to Write function for
// palindrome.
#include<stdio.h>
void palindrome( int a)
{
    int num = a , x = 0;
    while ( a != 0 )
    {
    int r = a % 10;
    x = x * 10 + r;
    a = a / 10;
    }
    if ( num == x) printf("The number is palindrome ");
    else printf("The number is not palindrome");
}
int main()
{
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}