#include<stdio.h>
int main()
{
   int n , x = 0;
   printf ("enter the number :");
   scanf ("%d",&n);
   while( n != 0)
   {
   n = n / 10;
   x++;
   }
   printf(" number of digits in this will be: %d",x);
    return 0;
    
}