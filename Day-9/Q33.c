// Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *
#include<stdio.h>
int main()
{
    int i  ;
    
    for( i = 1 ; i <= 5 ; i ++ )
    {
        for (int j = 5 ; j >= i ; j -- )
       { 
        printf("*");
       }
       printf("\n");
    }
    return 0;
}