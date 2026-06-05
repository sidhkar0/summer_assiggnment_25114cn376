#include <stdio.h>
int main() {
    int n, prod = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n == 0) prod = 0;
    while(n > 0) { prod *= n % 10; n /= 10; }
    printf("Product: %d", prod);
    return 0;
}
