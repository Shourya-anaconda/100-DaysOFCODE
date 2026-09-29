/* Q64: Find the digit that occurs the most times in an integer number.
 */
#include <stdio.h>
int main() {
    int n, c[10] = {
        0
    }, d, best = 0, i;
    scanf("%d", &n);
    if (n < 0)n = - n;
    if (n == 0)c[0] = 1; while (n) {
        c[n % 10]++;
        n /= 10;
    }
    for (i = 1; i < 10; i++)if (c[i] > c[best])best = i;
    printf("%d", best);
    return 0;
}
