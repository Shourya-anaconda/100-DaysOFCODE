/* Q69: Find the second largest element in an array.
 */
#include <stdio.h>
int main() {
    int n, a[1000], i, j, mx = - 2147483647, sec = - 2147483647;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    for (i = 0; i < n; i++)if (a[i] > mx)mx = a[i];
    for (i = 0; i < n; i++)if (a[i] < mx && a[i] > sec)sec = a[i];
    printf("%d", sec == - 2147483647? - 1: sec);
    return 0;
}
