/* Q73: Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>
int main() {
    int r, c, a[50][50], s[50] = {
        0
    }, i, j;
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)for (j = 0; j < c; j++) {
        scanf("%d", &a[i][j]);
        s[i] += a[i][j];
    }
    for (i = 0; i < r; i++)printf("%d ", s[i]);
    return 0;
}
