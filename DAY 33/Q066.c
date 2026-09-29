/* Q66: Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>
int main() {
    int n, a[1000], x, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &x);
    i = 0; while (i < n && a[i] < x)i++;
    for (j = n; j > i; j--)a[j] = a[j - 1];
    a[i] = x;
    n++;
    for (i = 0; i < n; i++)printf("%d ", a[i]);
    return 0;
}
