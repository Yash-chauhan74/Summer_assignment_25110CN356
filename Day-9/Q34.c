// Write a program to Print reverse number
// triangle.
// 12345
// 1234
// 123
// 12
// 1
#include<stdio.h>
int main()
{
    int i  ;
    
    for( i = 1 ; i <= 5 ; i ++ )
    {
        int x = 1;
        for (int j = 5 ; j >= i ; j -- )
       { 
        printf("%d",x);
        x++;
       }
       printf("\n");
    }
    return 0;
}