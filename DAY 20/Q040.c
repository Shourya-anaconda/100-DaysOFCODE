/* Q40: Write a program to find the 1’s complement of a binary number and print it.
 */
#include <stdio.h>
int main() {
    long long n, p = 1, r = 0;
    scanf("%lld", &n); while (n) {
        r += (1 - n % 10) * p;
        p *= 10;
        n /= 10;
    }
    printf("%lld", r);
    return 0;
}
