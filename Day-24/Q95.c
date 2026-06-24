// Write a program to Find longest word. 
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char str[n][100];
    int max = 0;
    printf("Enter the strings:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        if(strlen(str[i]) > strlen(str[max]))
        {
            max = i;
        }
    }
    printf("Longest string: %s", str[max]);
    return 0;
}