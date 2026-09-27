/* Q41: Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>
int main() {
    long long n, t, p = 1, first, last, r;
    scanf("%lld", &n);
    t = n;
    last = n % 10; while (t >= 10) {
        t /= 10;
        p *= 10;
    }
    first = t;
    r = n - first * p - last + last * p + first;
    printf("%lld", r);
    return 0;
}
