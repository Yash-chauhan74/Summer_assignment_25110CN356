// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE
#include<stdio.h>
int main()
{
    int i , n ;
    
    for( i = 1 ; i <= 5 ; i ++ )
    {
        int a = 65;
        for (int j = 1 ; j <= i ; j ++ )
       { 
        char ch = (char)a;
        printf("%c",ch);
        a++;
       }
       printf("\n");
    }
    return 0;
}