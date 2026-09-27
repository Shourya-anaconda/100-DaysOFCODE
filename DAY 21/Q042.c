/* Q42: Write a program to check if a number is a perfect number.
 */
#include <stdio.h>
int main() {
    int n, i, s = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
        if (n % i == 0)s += i;
    printf(s == n?"Perfect number": "Not perfect number");
    return 0;
}
