#include <stdio.h>
int main()
{
int n,i;
printf("enter the no. ");
scanf ("%d",&n);
int a = 0; 
for (i=2 ; i<n ; i++)
{
    if (n % i == 0)
    {
        a = 1;
        break;
    }
}
if (n==1 || n==0) printf("the no is neither composite nor prime");
else if (a==0) printf("the no is prime ");
else
printf("the no is composite");
    return 0;
}