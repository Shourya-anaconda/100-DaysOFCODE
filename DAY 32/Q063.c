/* Q63: Merge two arrays.
 */
#include <stdio.h>
int main() {
    int m, n, a[1000], b[1000], i;
    scanf("%d", &m);
    for (i = 0; i < m; i++)scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &b[i]);
    for (i = 0; i < m; i++)printf("%d ", a[i]);
    for (i = 0; i < n; i++)printf("%d ", b[i]);
    return 0;
}
