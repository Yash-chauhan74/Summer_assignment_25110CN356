//Write a program to Recursive reverse number. 
#include<stdio.h>
int rev = 0;
int reverse(int m)
{
    if ( m == 0 )
    return rev;
   else
   {
    rev = rev * 10 + (m % 10);
     return reverse ( m/10 );
   }
}
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("The reverse of the number will be : %d ",reverse(n));
    return 0;
}