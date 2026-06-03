#include <stdio.h>
int main()
{
int i,upper,lower;
printf("enter the lower boundary");
scanf("%d",&lower);
printf("enetr the upper boundary");
scanf("%d",&upper);
for(i = lower ; i <= upper ; i ++)
{
    int a = 0;
for(int j = 2 ; j < i ; j++)
{
if ( i % j == 0)
{
    a = 1;
break;
}
else {
continue;
}
}
if (a == 0)
printf(" %d\n",i);
else 
continue;
}
 return 0;
}