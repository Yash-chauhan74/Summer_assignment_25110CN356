// Write a program to Print repeated character
// pattern.
// A
// BB
// CCC
// DDDD
// EEEEE
#include<stdio.h>
int main()
{
    int i  ;
    int x = 65;
    for( i = 1 ; i <= 5 ; i ++ )
    {
        char ch = (char)x;
        for (int j = 1 ; j <= i ; j++ )
       { 
        printf("%c",ch);
       }
       printf("\n");
       x++;
    }
    return 0;
}