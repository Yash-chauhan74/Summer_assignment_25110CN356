// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
int main()
{
    int i ,a = 2*5-1;
    for( i = 1 ; i <= 5 ; i ++ )
   {
        for (int j = 1 ; j < i ; j++ )
        {
            printf(" ");
        }
       
       for ( int k = i ; k<=a ; k++ )
{
          printf("*");
} a--;
       printf("\n");
    }
    return 0;
}