/* Q79: Perform diagonal traversal of a matrix.
 */
#include <stdio.h>
int main() {
    int r, c, a[50][50], i, j;
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)for (j = 0; j < c; j++)scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++)for (j = 0; j < c; j++)if (i + j == 0 || i + j == 1)printf("%d ", a[i][j]);
    for (i = 2; i < r + c - 1; i++) {
        int x = i < c?0: i - c + 1, y = i - x; while (x < r && y >= 0)printf("%d ", a[x++][y--]);
    }
    return 0;
}
