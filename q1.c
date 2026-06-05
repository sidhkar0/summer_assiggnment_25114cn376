#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum: %d", sum);
    return 0;
}