// Write a program to Print number pyramid.
//     1
//    121
//   12321
//  1234321
// 123454321
#include<stdio.h>
int main()
{
    int i  ;
    for( i = 1 ; i <= 5 ; i ++ )
   {
        for (int j = 5 ; j > i ; j-- )
        printf(" ");
       for ( int k = 1 ; k<=i ; k++ )
{
          printf("%d",k);
}
for ( int x = i-1 ; x>=1 ; x-- )
{
printf("%d",x);

}
       printf("\n");
    }
    return 0;
}