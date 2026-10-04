/* Q103: Write a Program to take an array of integers as input, calculate the pivot index of this
 * array. The pivot index is the index where the sum of all the numbers strictly to the
 * left of the index is equal to the sum of all the numbers strictly to the index's right.
 * If the index is on the left edge of the array, then the left sum is 0 because there are
 * no elements to the left. This also applies to the right edge of the array. Print the
 * leftmost pivot index. If no such index exists, print -1.
 */
#include <stdio.h>
int main() {
    int n, a[1000], i, j, l, r;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        l = r = 0;
        for (j = 0; j < i; j++)l += a[j];
        for (j = i + 1; j < n; j++)r += a[j];
        if (l == r) {
            printf("%d", i);
            return 0;
        }
    }
    puts("-1");
    return 0;
}
