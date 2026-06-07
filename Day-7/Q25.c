//Write a program to Recursive factorial. 
#include<stdio.h>
int factorial(int m)
    {
        if (m == 0)
        return 1;
        else 
        return m * factorial( m-1 );
    } 
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The factorial of this number will be : %d",factorial(n));
    return 0;

}