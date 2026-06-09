// Write a program to Print hollow square
// pattern.
// *****
// *   *
// *   *
// *   *
// *****
#include<stdio.h>
int main()
{
    int i  ;
    for( i = 1 ; i <= 5 ; i ++ )
    {
        for (int j = 1 ; j <= 5 ; j++ )
       { 
        if ( i == 1 || j == 1 )
        printf("*");
        else if ( i == 5 || j == 5 )
        printf("*");
        else 
        printf(" ");
       }
       printf("\n");
    }
    return 0;
}