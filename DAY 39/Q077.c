/* Q77: Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>
int main() {
    int n, a[50][50], i, j, k, ok = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)for (j = 0; j < n; j++)scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)for (j = i + 1; j < n; j++)if (a[i][i] == a[j][j])ok = 0;
    puts(ok?"Distinct": "Not distinct");
    return 0;
}
