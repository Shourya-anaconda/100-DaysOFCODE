/* Q33: Write a program to check if a number is an Armstrong number.
 */
#include <stdio.h>
int main() {
    int n, t, d = 0, sum = 0, p = 1, i;
    scanf("%d", &n);
    t = n;
    do {
        d++;
        t /= 10;
    } while (t);
    t = n;
    do {
        int r = t % 10;
        p = 1;
        for (i = 0; i < d; i++)p *= r;
        sum += p;
        t /= 10;
    } while (t);
    if (sum == n)printf("Armstrong"); else printf("Not Armstrong");
    return 0;
}
