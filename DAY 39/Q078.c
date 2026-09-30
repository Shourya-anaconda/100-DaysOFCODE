/* Q78: Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>
int main() {
    int n, a[50][50], i, j, s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
        if (i == j)s += a[i][j];
    }
    printf("%d", s);
    return 0;
}
