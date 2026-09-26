/* Q32: Write a program to check if a number is a palindrome.
 */
#include <stdio.h>
int main() {
    int n, t, r, rev = 0;
    scanf("%d", &n);
    t = n; while (t > 0) {
        r = t % 10;
        rev = rev * 10 + r;
        t /= 10;
    }
    if (n == rev)printf("Palindrome"); else printf("Not palindrome");
    return 0;
}
