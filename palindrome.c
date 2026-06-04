#include<stdio.h>
int main()
{
   int n , r , s = 0;
   printf ("enter the number :");
   scanf ("%d",&n);
   int num = n ;
   while( n != 0)
   {
   r = n % 10;
   s = s * 10 + r;
   n = n / 10;
   } 
   if ( num == s)
   printf("the number is palindrome");
   else
   printf("the number is not palindrome");
    return 0;
    
}