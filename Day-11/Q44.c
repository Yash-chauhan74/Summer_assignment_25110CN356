// Write a program to Write function to find
// factorial.
#include<stdio.h>
int factorial( int a)
{
    int fact = 1;
    for ( int i = 2 ; i <= a ; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
int n ;
printf("Enter the number :");
scanf("%d",&n);
printf("The factorial of this number is :%d",factorial(n));
return 0;
}