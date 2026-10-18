/* Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the
 * arrays such that the merged array is also sorted. Print the merged array.
 */
#include <stdio.h>
int main() {
    int m, n, a[1000], b[1000], i = 0, j = 0, k;
    scanf("%d", &m);
    for (k = 0; k < m; k++)scanf("%d", &a[k]);
    scanf("%d", &n);
    for (k = 0; k < n; k++)scanf("%d", &b[k]); while (i < m && j < n) {
        if (a[i] < b[j])printf("%d ", a[i++]); else printf("%d ", b[j++]);
    } while (i < m)printf("%d ", a[i++]); while (j < n)printf("%d ", b[j++]);
    return 0;
}
