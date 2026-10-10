/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the
 * maximum sum of all the subarrays of size k.
 */
#include <stdio.h>
int main() {
    int n, a[1000], k, i, s = 0, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i < k; i++)s += a[i];
    m = s;
    for (i = k; i < n; i++) {
        s += a[i] - a[i - k];
        if (s > m)m = s;
    }
    printf("%d", m);
    return 0;
}
