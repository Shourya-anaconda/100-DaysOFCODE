/* Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to
 * find the kth smallest element in the array. Print the kth smallest element as output.
 */
#include <stdio.h>
int main() {
    int n, a[1000], i, j, k, t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i < n - 1; i++)for (j = i + 1; j < n; j++)if (a[i] > a[j]) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    if (k > 0 && k <= n)printf("%d", a[k - 1]);
    return 0;
}
