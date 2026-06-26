// Write a program to Create quiz application. 
#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("===== QUIZ =====\n");
    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;
    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;
    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    printf("Enter answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;
    printf("\nYour Score = %d/3\n", score);
    return 0;
}