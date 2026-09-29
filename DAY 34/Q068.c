/* Q68: Delete an element from an array.
 */
#include <stdio.h>
int main() {
    int n, a[1000], p, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &p);
    for (i = p - 1; i < n - 1; i++)a[i] = a[i + 1];
    for (i = 0; i < n - 1; i++)printf("%d ", a[i]);
    return 0;
}
