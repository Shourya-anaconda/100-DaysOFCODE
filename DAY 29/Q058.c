/* Q58: Find the maximum and minimum element in an array.
 */
#include <stdio.h>
int main() {
    int n, a[1000], i, mn, mx;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    mn = mx = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < mn)mn = a[i];
        if (a[i] > mx)mx = a[i];
    }
    printf("Max=%d, Min=%d", mx, mn);
    return 0;
}
