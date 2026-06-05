#include <stdio.h>
int main() {
    int n, rev = 0, original;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    if(original == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
