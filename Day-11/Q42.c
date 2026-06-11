// Write a program to Write function to find
// maximum.
#include<stdio.h>
int max( int a , int b )
{
    if ( a > b) return a;
    else return b;

}
int main()
{
int a , b ;
printf("Enter the number a and b respectively: ");
scanf("%d %d",&a ,&b);
if ( a == b)
printf(" the numbers are equal ");
else
printf("The maximum of these numbers will be: %d",max(a,b));
return 0;
}