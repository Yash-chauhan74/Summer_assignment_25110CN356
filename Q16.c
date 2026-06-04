// Write a program to Print Armstrong numbers in a range

#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int temp = num;
    int digits = 0;
    double sum = 0; 
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits)); 
        temp /= 10;
    }
    return ((int)sum == originalNum);
}

int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    if (scanf("%d", &start) != 1) return 1;
    printf("Enter the ending number of the range: ");
    if (scanf("%d", &end) != 1) return 1;
    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (i < 0) 
        continue; 
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}