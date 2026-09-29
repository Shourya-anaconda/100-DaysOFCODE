/* Q65: Search in a sorted array using binary search.
 */
#include <stdio.h>
int main() {
    int n, a[1000], x, l = 0, r, m, ans = - 1, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &x);
    r = n - 1; while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x) {
            ans = m;
            break;
        }
        if (a[m] < x)l = m + 1; else r = m - 1;
    }
    printf("%d", ans);
    return 0;
}
