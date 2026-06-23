#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char ch;
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq[(unsigned char)str[i]] > max)
        {
            max = freq[(unsigned char)str[i]];
            ch = str[i];
        }
    }
    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d\n", max);
    return 0;
}