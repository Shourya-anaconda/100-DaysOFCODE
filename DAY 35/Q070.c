/* Q70: Rotate an array to the right by k positions.
 */
#include <stdio.h>
int main() {
    int n, a[1000], k, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    k %= n;
    for (i = 0; i < n; i++)printf("%d ", a[(i + n - k) % n]);
    return 0;
}
