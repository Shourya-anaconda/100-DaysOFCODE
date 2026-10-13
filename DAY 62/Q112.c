/* Q112: Write a program to take an integer array arr as input. The task is to find the maximum
 * sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as
 * output. If all elements are negative, print the largest (least negative) element.
 */
#include <stdio.h>
int main() {
    int n, a[1000], i;
    long long cur, best;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    cur = best = a[0];
    for (i = 1; i < n; i++) {
        cur = cur + a[i] > a[i]?cur + a[i]: a[i];
        if (cur > best)best = cur;
    }
    printf("%lld", best);
    return 0;
}
