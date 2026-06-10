// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
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
          printf("%c",'A' + k-1);
    
}
for ( int x = i-1 ; x>=1 ; x-- )
{
printf("%c",'A'+ x-1);

}
       printf("\n");
    }
    return 0;
}