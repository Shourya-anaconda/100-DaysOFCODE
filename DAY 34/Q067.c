/* Q67: Insert an element in an array at a given position.
 */
#include <stdio.h>
int main() {
    int n, a[1000], p, x, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d%d", &x, &p);
    for (i = n; i >= p; i--)a[i] = a[i - 1];
    a[p - 1] = x;
    n++;
    for (i = 0; i < n; i++)printf("%d ", a[i]);
    return 0;
}
