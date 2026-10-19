/* Q118: Write a program to take an input array of size n. The array should contain all the
 * integers between 0 to n except for one. Print that missing number
 */
#include <stdio.h>
int main() {
    int n, x, i, s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        s ^= x;
    }
    for (i = 0; i <= n; i++)s ^= i;
    printf("%d", s);
    return 0;
}
