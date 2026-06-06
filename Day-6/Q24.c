#include<stdio.h>
int main()
{
    int x , n , result = 1;
    printf("enter x and n respectively :");
    scanf("%d %d",&x, &n);
    for ( int i = 1 ; i <= n ; i++ )
    {
        result = result * x;
    }
    printf("the value of %d^%d is : %d",x ,n , result);
    return 0;
}