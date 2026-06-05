#include <stdio.h>
int main() 
{
    int n, Prime = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n < 2) Prime = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) { Prime = 0; break; }
    }
    if(Prime) printf("Prime");
    else printf("Not Prime");
    return 0;
}
