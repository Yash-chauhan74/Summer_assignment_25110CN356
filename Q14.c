// wap to find nth term of fabonacci series
#include <stdio.h>
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int main() {
    int n;
    printf("Enter the position (n) to find the Fibonacci term: ");
    scanf("%d", &n);

    if (n < 0) {
        printf(" enter a non-negative integer.\n");
    } else {
        printf("The %dth Fibonacci term is: %d\n", n, fibonacci_recursive(n));
    }

    return 0;
}