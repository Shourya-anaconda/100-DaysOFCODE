/* Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as
 * inputs. The elements in the sorted array might be repeated. You need to print the first
 * and last occurrence of the target and print the index of first and last occurrence.
 * Print -1, -1 if the target is not present.
 */
#include <stdio.h>
int main() {
    int n, a[1000], x, i, f = - 1, l = - 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &x);
    for (i = 0; i < n; i++)if (a[i] == x) {
        if (f < 0)f = i;
        l = i;
    }
    printf("%d %d", f, l);
    return 0;
}
