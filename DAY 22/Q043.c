/* Q43: Write a program to check if a number is a strong number.
 */
#include <stdio.h>
int main() {
    int n, t, s = 0, f, i;
    scanf("%d", &n);
    t = n; while (t) {
        int d = t % 10;
        f = 1;
        for (i = 1; i <= d; i++)f *= i;
        s += f;
        t /= 10;
    }
    puts(s == n?"Strong number": "Not strong number");
    return 0;
}
