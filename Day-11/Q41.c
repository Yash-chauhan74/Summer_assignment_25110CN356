// Write a program to Write function to find sum
// of two numbers
#include<stdio.h>
int sum( int a , int b )
{
    return (a + b);

}
int main()
{
int a , b ;
printf("Enter the number a and b respectively: ");
scanf("%d %d",&a ,&b);
printf("The sum of these numbers will be: %d",sum(a,b));
return 0;
}